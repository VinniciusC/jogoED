#ifndef TELAS_H
#define TELAS_H

#include "ModulosComuns.h"
#include "ListaProdutos.h"

int telaInicial();                                        //Tela inicial que conta a historia inicial
int telaMemorizar(Produto* produtos, Lista& comprasMae);  //Tela que gera a lista de compras aleatoriamente e printa na tela
int telaInicial2();                                       //Tela que conta a historia da perda da lista

#endif
