#include <iostream>
#include "ListaProdutos.h"
#include "CadastraProdutos.h"
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

using namespace std;

void refresh(){
	if (system("CLS")) system("clear");
}

void menuCategoria(){
    refresh();
	int input;
	cout << "Voce esta no mercado, navegue nos diferentes setores digitando o numero dele" << endl;
	cout << endl;
	cout << "0 - BEBIDAS                       1 - CARNES" << endl;
	cout << "2 - FRIOS                         3 - HORTIFRUTI" << endl;
	cout << "4 - LIMPEZA                       5 - PADARIA" << endl;
	cout << endl;
	cout << "6 para sair do jogo" << endl;

	cin >> input;
	switch(input){
		case 0:
			refresh();
/*			menuBEBIDAS();
		case 1:
			refresh();
			menuCARNES();
		case 2:
			refresh();
			menuFRIOS();
		case 3:
			refresh();
			menuHORTIFRUTI();
		case 4:
			refresh();
			menuLIMPEZA();
		case 5:
			refresh();
			menuPADARIA();
		case 6:
			refresh();
			cout << "end game" << endl;
		default:
			refresh();
			menuCategoria();*/
	}
}


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
