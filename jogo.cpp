#include <iostream>
#include "ListaProdutos.h"
#include "CadastraProdutos.h"
#include "menus.h"
#include "funcoes_comuns.h"

using namespace std;

int prefacio(){
    //Tela 1 - Prefácio
    int opcao = 1;

    cout << "Sua mae te mandou ir ao mercado fazer compras." << endl;
    cout << "Ela lhe deu uma LISTA DE COMPRAS." << endl;
    cout << "Voce deve trazer todos os itens corretos. Nao decepcione sua mae." << endl << endl;
    cout << "Aperte 0 para continuar..." << endl << endl;

    while(opcao != 0){
        cin >> opcao;
    }

    return opcao;
}


int prefacio_2(){

    refresh();
    //Tela 3 - Perda da LISTA DE COMPRAS
    int opcao = 1;

    cout << "Ao chegar no mercado, voce percebe que perdeu a LISTA DE COMPRAS" << endl;
    cout << "Conhecendo bem sua mae, voce sabe que nao pode voltar de maos vazias, muito menos com os produtos errados." << endl;
    cout << "Navegue pelo menu e efetue a compra dos itens corretos." << endl << endl;
    cout << "Aperte 0 para continuar..." << endl << endl;

    while(opcao != 0){
        cin >> opcao;
    }

    return opcao;
}

int main(){

    int opcao;

    opcao = prefacio();

    if(opcao == 0)
        opcao = prefacio_2();

    if(opcao == 0){
        menuCategoria();
    }





    return 0;
}
