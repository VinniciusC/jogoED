#include "Telas.h"

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

int telaInicial2() //Tela que conta a historia da perda da lista
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
