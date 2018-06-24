#include "ModulosComuns.h"
#include "ListaProdutos.h"

void quantidadeCertosErrados(Lista& comprasMae, Lista& comprasFilho, int& certos, int& errados)
{
    Produto elemento;
    certos = 0;
    errados = 0;

    if (!comprasFilho.estaVazia())
    {
        if (comprasFilho.pegaPrimeiro(elemento))
        {
            if (comprasMae.estaNaLista(elemento))
                certos++;
            else
                errados++;

            while (comprasFilho.pegaProximo(elemento))
            {
                if (comprasMae.estaNaLista(elemento))
                    certos++;
                else
                    errados++;
            }
        }
    }
}
