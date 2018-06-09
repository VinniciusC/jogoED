#include <iostream>
#include <chrono>
#include <thread>
#include "ListaProdutos.h"
#include "CadastraProdutos.h"
#include "menus.h"
#include "funcoes_comuns.h"
#include "TelaMemorizar.h"

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


int prefacio(){ //Tela inicial que conta a hist�ria inicial

    refresh();
    int opcao = 1;

    string message = "Sua mae te mandou ir ao mercado fazer compras.\n";
    slow_print(message, 30);

    message = "Ela lhe deu uma LISTA DE COMPRAS.\n";
    slow_print(message, 30);

    message = "Voce deve trazer todos os itens corretos. Nao decepcione sua mae.\n\n";
    slow_print(message, 30);

    message = "Aperte 0 para continuar...\n\n";
    slow_print(message, 30);

    while(opcao != 0){
        cin >> opcao;
    }
	refresh();
    return opcao;
}

int lista_inicial(Produto *produtos, Lista& comprasMae){ //Tela que gera a lista de compras aleatoriamente e printa na tela

    int opcao = 1;
	telaMemorizar(produtos, comprasMae);
    string message = "Aperte 0 para continuar...\n\n";
    slow_print(message, 30);

    while(opcao != 0){
        cin >> opcao;
    }

	refresh();
    return opcao;
}

int prefacio_2(){ //Tela que conta a hist�ria da perda da lista

    int opcao = 1;

    string message = "Ao chegar no mercado, voce percebe que perdeu a LISTA DE COMPRAS\n";
    slow_print(message, 30);

    message = "Conhecendo bem sua mae, voce sabe que nao pode voltar de maos vazias, muito menos com os produtos errados.\n";
    slow_print(message, 30);

    message = "Navegue pelo menu e efetue a compra dos itens corretos\n\n";
    slow_print(message, 30);

    message = "Aperte 0 para continuar...\n\n";
    slow_print(message, 30);

    while(opcao != 0){
        cin >> opcao;
    }
	refresh();
    return opcao;
}

int main(){

    int opcao;
    Produto produtos[60];
    Lista comprasMae;

    cadastraProdutos(produtos);

    /*opcao = prefacio();

    if(opcao == 0)*/
        opcao = lista_inicial(produtos, comprasMae);

    /*if(opcao == 0)
        opcao = prefacio_2();

    if(opcao == 0){*/
        menuCategoria(produtos,comprasMae);
    //}




    return 0;
}
