#include "ModulosComuns.h"
#include "ListaProdutos.h"

void geraListaAletoria(Produto* produtos, Lista& l)
{
	srand(time(NULL));

	int n[10];

	for (int i = 0; i < 10; i++) //Loop externo que sorteia um numero entre 0 e 59
    {
		n[i] = rand() % 60;

		for (int k = 0; k < i; k++)
        {
			if(n[k] == n[i]) //Se o numero sorteado ja existir, esse numero eh sorteado novamente
			{
				n[k] = rand() % 60;
				k = 0;
			}
		}
	}

	for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 60; j++) //Para cada numero sorteado, eh inserido o produto equivalente aos existentes
        {
			if(n[i] == produtos[j].getID())
				l.insere(produtos[j]);
		}
    }
}
