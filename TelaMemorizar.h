#ifndef TELAMEMORIZAR_H_INCLUDED
#define TELAMEMORIZAR_H_INCLUDED
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif
#include <iostream>
#include <time.h>
#include "CadastraProdutos.h"
#include "funcoes_comuns.h"
#include "ListaProdutos.h"

void imprimeLista(Lista& l1)
{
    Produto elemento;
    int contador = 1;

    cout << "LISTA DE COMPRAS:" << endl << endl;

    if (l1.pegaPrimeiro(elemento))
    {
        cout << elemento.getNome() << endl;;

        while (l1.pegaProximo(elemento))
        {
            cout << elemento.getNome() << endl;
            contador++;
        }

        cout << endl;
    }
}

void gerarListaAletoria(Produto* produtos, Lista& l)
{
	srand(time(NULL));

	int n[10];

	for (int i = 0; i < 10; i++) { //Loop externo que sorteia um numero entre 0 e 59
		n[i] = rand() % 60;

		for (int k = 0; k < i; k++) {
			if(n[k] == n[i]) //Se o numero sorteado ja existir, esse numero eh sorteado novamente
			{
				n[k] = rand() % 60;
				k = 0;
			}
		}
	}

	for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 60; j++) { //Para cada numero sorteado, eh inserido o produto equivalente aos existentes
			if(n[i] == produtos[j].getID()){
				l.insere(produtos[j]);
			}
		}
    }
}

int telaMemorizar(Produto* produtos, Lista& comprasMae){

    int opcao = 1;

    gerarListaAletoria(produtos,comprasMae);
    imprimeLista(comprasMae);

    return opcao;
}


#endif // TELAMEMORIZAR_H_INCLUDED
