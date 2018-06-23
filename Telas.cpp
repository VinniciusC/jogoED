#include "Telas.h"

int errados = 0;
int certos = 0;

int telaInicial()
{
    refresh();
    int opcao = 1;
    string mensagem;

    mensagem = "Sua mae te mandou ir ao mercado fazer compras.\n";
    printDevagar(mensagem, 30);

    mensagem = "Ela lhe deu uma LISTA DE COMPRAS.\n";
    printDevagar(mensagem, 30);

    mensagem = "Voce deve trazer todos os itens corretos. Nao decepcione sua mae.\n\n";
    printDevagar(mensagem, 30);

    mensagem = "Aperte 0 para continuar...\n\n";
    printDevagar(mensagem, 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

int telaMemorizar(Produto* produtos, Lista& comprasMae)
{
    int opcao = 1;
    string mensagem;

    geraListaAletoria(produtos, comprasMae);
    cout << "LISTA DE COMPRAS:" << endl << endl;
    comprasMae.imprimeLista();

    mensagem = "Aperte 0 para continuar...\n\n";
    printDevagar(mensagem, 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

int telaInicial2()
{
    int opcao = 1;
    string mensagem;

    mensagem = "Ao chegar no mercado, voce percebe que perdeu a LISTA DE COMPRAS\n";
    printDevagar(mensagem, 30);

    mensagem = "Conhecendo bem sua mae, voce sabe que nao pode voltar de maos vazias, muito menos com os produtos errados.\n";
    printDevagar(mensagem, 30);

    mensagem = "Navegue pelo menu e efetue a compra dos itens corretos\n\n";
    printDevagar(mensagem, 30);

    mensagem = "Aperte 0 para continuar...\n\n";
    printDevagar(mensagem, 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

void estaNaListaAleatoria(Produto* produtos, Lista& l, int ID)
{
    string mensagem;

    if (l.estaNaLista(produtos[ID]))
        certos++;
    else
        errados++;

    mensagem = "Voce comprou " + produtos[ID].getNome() + ".........";
    printDevagar(mensagem, 30);
};

void menuMercado(Produto* produtos, Lista& l)
{
    refresh();
	int departamento;
	string mensagem;

    mensagem = "Voce esta no mercado\n";
	printDevagar(mensagem, 30);

	for (int i = 0; i <= 5; i++)
        cout << i << " - " << produtos[i * 10].getDepartamento() << endl;

	cout << endl << "6 - Voltar para casa" << endl;

	cin >> departamento;

	if ((errados + certos) >= 15)
        menuFinal(l);

    if (departamento >= 0 && departamento <= 5)
        menuDepartamentos(departamento, produtos, l);
    else if (departamento == 6)
        menuFinal(l);
    else
    {
        refresh();
        menuMercado(produtos, l);
    }
}

void menuDepartamentos(int departamento, Produto* produtos, Lista& l)
{
    refresh();
	int produtoEscolhido;
	string mensagem;

	mensagem = produtos[departamento * 10].getDepartamento();
	printDevagar(mensagem, 80);
	cout << endl;

	for (int i = 0; i < 10; i++)
        cout << i << " - " << produtos[i + (10 * departamento)].getNome() << endl;

    cout << endl << "10 - Voltar" << endl;

	cin >> produtoEscolhido;

	if (produtoEscolhido >= 0 && produtoEscolhido <= 9)
    {
        for (int i = 0; i < 10; i++)
        {
            if (produtoEscolhido == i)
            {
                estaNaListaAleatoria(produtos, l, i + (10 * departamento));
                menuDepartamentos(departamento, produtos, l);
            }
        }
    }
	else if (produtoEscolhido == 10)
        menuMercado(produtos,l);
    else
        menuDepartamentos(departamento, produtos, l);
}

void menuFinal(Lista& l)
{
    refresh();
	cout << "Certos "<<certos << endl;
	cout << "Errados "<<errados << endl;
    if (certos == 10 && errados == 0)
        cout << "Voce voltou pra casa e sua mae lhe disse que voce nao fez mais que sua obrigacao" << endl;
    else if (certos == 10 && errados <= 3)
        cout << "Voce voltou pra casa e sua mae ficou furiosa por ter comprado itens a mais, uma penalidade sera aplicada na mesada" << endl;
    else if ((errados + certos) >= 15)
        cout << "Voce gastou todo dinheiro da sua mae, e nao vai receber mesada no mes seguinte" << endl;
    else if ((errados + certos) < 10)
        cout << "Voce voltou pra casa e sua mae ficou furiosa por nao ter comprado os itens que ela lhe pediu" << endl;
    else
        cout << "Parabens, voce atingiu um final que os programadores nao pensaram" << endl;
}
