#include <iostream>
#include "ListaProdutos.h"
#include "CadastraProdutos.h"

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

int lista_inicial(){
    //Tela 2 - Gera a lista aleatoriamente e printa na tela

}

int prefacio_2(){
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

    if (opcao == 0)
    {
        opcao = 1;

        Produto produtos[60];

        cadastraProdutos(produtos);
        for (int i = 0; i < 60; i++)
            cout << produtos[i].getNome() << endl;

        cout << "Aperte 0 para continuar..." << endl << endl;

        while(opcao != 0){
            cin >> opcao;
        }

    }

    if(opcao == 0)
        opcao = prefacio_2();



    return 0;
}
