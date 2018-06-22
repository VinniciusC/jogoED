#include "menus.h"
#include "Telas.h"

int main()
{
    int opcao;
    Produto produtos[60];
    Lista comprasMae;

    cadastraProdutos(produtos);

    opcao = telaInicial();

    if(opcao == 0)
        opcao = telaMemorizar(produtos, comprasMae);

    if(opcao == 0)
        opcao = telaInicial2();

    if(opcao == 0)
        menuCategoria(produtos, comprasMae);

    return 0;
}
