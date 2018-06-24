#include "Telas.h"

int telaInicial()
{
    refresh();
    int opcao = 1;

    printDevagar("Sua mae te mandou ir ao mercado fazer compras.\n", 30);
    printDevagar("Ela lhe deu uma LISTA DE COMPRAS.\n", 30);
    printDevagar("Voce deve trazer todos os itens corretos. Nao decepcione sua mae.\n\n", 30);
    printDevagar("Pressione 0 para continuar...\n\n", 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

int telaMemorizar(Produto* produtos, Lista& comprasMae)
{
    int opcao = 1;

    geraListaAletoria(produtos, comprasMae);

    printDevagar("LISTA DE COMPRAS:\n\n", 30);
    comprasMae.imprimeLista();
    printDevagar("Pressione 0 para continuar...\n\n", 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

int telaInicial2()
{
    int opcao = 1;

    printDevagar("Ao chegar no mercado, voce percebe que perdeu a LISTA DE COMPRAS\n", 30);
    printDevagar("Conhecendo bem sua mae, voce sabe que nao pode voltar de maos vazias, muito menos com os produtos errados.\n", 30);
    printDevagar("Navegue pelo menu e efetue a compra dos itens corretos\n\n", 30);
    printDevagar("Pressione 0 para continuar...\n\n", 30);

    while (opcao != 0)
        cin >> opcao;

	refresh();
    return opcao;
}

void menuMercado(Produto* produtos, Lista& comprasMae, Lista& comprasFilho)
{
    refresh();
	int departamento;

	printDevagar("Voce esta no mercado\n\n", 30);

	for (int i = 0; i <= 5; i++)
        cout << i << " - " << produtos[i * 10].getDepartamento() << endl;

    cout << endl << "6 - Ver meu carrinho de compras";
	cout << endl << "7 - Voltar para casa" << endl;

	cin >> departamento;

    if (departamento >= 0 && departamento <= 5)
        menuDepartamentos(departamento, produtos, comprasMae, comprasFilho);
    else if (departamento == 6)
        menuCarrinho(produtos, comprasMae, comprasFilho);
    else if (departamento == 7)
        menuFinal(comprasMae, comprasFilho);
    else
        menuMercado(produtos, comprasMae, comprasFilho);
}

void menuDepartamentos(int departamento, Produto* produtos, Lista& comprasMae, Lista& comprasFilho)
{
    refresh();
	int produtoEscolhido;

	printDevagar(produtos[departamento * 10].getDepartamento() + "\n\n", 30);

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
                if (comprasFilho.insere(produtos[i + (10 * departamento)]))
                    printDevagar("Voce comprou " + produtos[i + (10 * departamento)].getNome() + ".........", 30);
                else
                    printDevagar("Voce ja tem " + produtos[i + (10 * departamento)].getNome() + ".........", 30);

                menuDepartamentos(departamento, produtos, comprasMae, comprasFilho);
                break;
            }
        }
    }
	else if (produtoEscolhido == 10)
        menuMercado(produtos, comprasMae, comprasFilho);
    else
        menuDepartamentos(departamento, produtos, comprasMae, comprasFilho);
}

void menuCarrinho(Produto* produtos, Lista& comprasMae, Lista& comprasFilho)
{
    refresh();
    Produto elemento;
    Produto produtosCarrinho[15];
    int contador = 0, produtoEscolhido;

    printDevagar("Qual produto deseja retirar \n", 30);

    if (!comprasFilho.estaVazia())
    {
        if (comprasFilho.pegaPrimeiro(elemento))
        {
            produtosCarrinho[contador] = elemento;
            cout << endl << contador << " - " << elemento.getNome() << endl;
            contador++;

            while (comprasFilho.pegaProximo(elemento))
            {
                produtosCarrinho[contador] = elemento;
                cout << contador << " - " << elemento.getNome() << endl;
                contador++;
            }
        }
    }

    cout << endl << contador << " - Voltar" << endl;

    cin >> produtoEscolhido;

    if (produtoEscolhido >= 0 && produtoEscolhido < contador)
    {
        for (int i = 0; i < contador; i++)
        {
            if (produtoEscolhido == i)
            {
                comprasFilho.retira(produtosCarrinho[i]);
                printDevagar("Voce retirou " + produtosCarrinho[i].getNome() + ".........", 30);
                menuCarrinho(produtos, comprasMae, comprasFilho);
                break;
            }
        }
    }
    else if (produtoEscolhido == contador)
        menuMercado(produtos, comprasMae, comprasFilho);
    else
        menuCarrinho(produtos, comprasMae, comprasFilho);
}

void menuFinal(Lista& comprasMae, Lista& comprasFilho)
{
    refresh();
    int certos, errados;
    quantidadeCertosErrados(comprasMae, comprasFilho, certos, errados);

    if (comprasFilho.quantidadeElementos() == 7)
    {
        if (certos == 7)
            printDevagar("Voce voltou pra casa e sua mae disse que voce nao fez nada mais que sua obrigacao", 30);
        else if (certos >= 1 && certos < 7)
            printDevagar("Voce voltou pra casa e sua mae ficou furiosa por nao ter comprado os itens que ela lhe pediu", 30);
        else
            printDevagar("Voce voltou pra casa e nao comprou nenhum item certo... Sua mae vai te bater muito essa noite", 30);
    }
    else if (comprasFilho.quantidadeElementos() < 7)
    {
        if (comprasFilho.quantidadeElementos() == 0)
            printDevagar("Voce voltou para casa de maos vazias e sua mae ficou mais pistola que o canarinho... nao vai jantar hoje", 30);
        else
        {
            if (certos == comprasFilho.quantidadeElementos())
                printDevagar("Voce voltou pra casa e nao comprou nenhum item errado, mas esta faltando alguns produtos... Sem TV hoje", 30);
            else if (certos >= 1 && certos < comprasFilho.quantidadeElementos())
                printDevagar("Voce voltou pra casa com produtos faltando e alguns itens errados ... Acho melhor voce correr", 30);
            else
                printDevagar("Voce voltou pra casa com poucos produtos e com produtos totalmente errados ... Hoje voce nao dorme em casa", 30);
        }
    }
    else
    {
        if (comprasFilho.quantidadeElementos() > 12)
        {
            if (certos == 7)
                printDevagar("Voce comprou os itens certos mas gastou TODO o dinheiro da sua mae, e nao vai receber mesada nos proximos 3 meses", 30);
            else if (certos >= 1 && certos < 7)
                printDevagar("Voce voltou pra casa com muitos errados a mais e gastou TODO o dinheiro da sua mae...\nVoce eh deserdado da sua casa", 30);
            else
                printDevagar("Voce gastou TODO dinheiro da sua mae, comprando itens totalmente aleatorios... Os vizinhos te encontram jogado do predio, morto", 30);
        }
        else
        {
            if (certos == 7)
                printDevagar("Voce voltou pra casa com os itens certos, porem com alguns errado a mais... Sua mae nao vai te dar mesada esse mes", 30);
            else if (certos >= 1 && certos < 7)
                printDevagar("Voce voltou pra casa com apenas alguns itens certos e com muitos errados a mais... Voce ja ouve o barulho da cinta", 30);
            else
                printDevagar("Voce voltou pra casa com muitos itens errados, e em quantidade muito gande... \nVoce aparece na escola com marcas no corpo e a escola chama o conselho tutelar", 30);
        }
    }

    cout << "\n\nLista Original da mae: " << endl;
    comprasMae.imprimeLista();
    cout << "Sua Lista de Compras: " << endl;
    comprasFilho.imprimeLista();

	cout << "Compras certas: " << certos << endl;
	cout << "Compras erradas: " << errados << endl;
}
