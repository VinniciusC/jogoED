#include "Telas.h"

int main()
{
    int opcao;
    Produto produtos[60];
    Lista comprasMae;
    Lista comprasFilho;

    cadastraProdutos(produtos);

    opcao = telaInicial();

    if (opcao == 0)
        opcao = telaMemorizar(produtos, comprasMae);

    if (opcao == 0)
        opcao = telaInicial2();

    if (opcao == 0)
        if (opcao == 0) menuMercado(produtos, comprasMae, comprasFilho);

    return 0;
}
