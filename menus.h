#include <iostream>
#include "funcoes_comuns.h"

using namespace std;

void menuCategoria();
void menuBEBIDAS();
void menuCARNES();
void menuFRIOS();
void menuHORTIFRUTI();
void menuLIMPEZA();
void menuPADARIA();

void menuCategoria(){
    refresh();
	int input;
    string message = "Menu\n";
	slow_print(message, 5);

	cout << "0 - BEBIDAS                       1 - CARNES" << endl;
	cout << "2 - FRIOS                         3 - HORTIFRUTI" << endl;
	cout << "4 - LIMPEZA                       5 - PADARIA" << endl;
	cout << endl;
	cout << "6 - sair do jogo" << endl;

	cin >> input;
	switch(input){
		case 0:
			refresh();
  			menuBEBIDAS();
  			break;
/*		case 1:
			refresh();
			menuCARNES();
			break;
		case 2:
			refresh();
			menuFRIOS();
			break;
		case 3:
			refresh();
			menuHORTIFRUTI();
			break;
		case 4:
			refresh();
			menuLIMPEZA();
			break;
		case 5:
			refresh();
			menuPADARIA();
			break;
		case 6:
			refresh();
			cout << "end game" << endl;
			breal;
		default:
			refresh();
			menuCategoria();
			break;
			*/
	}
}

void menuBEBIDAS(){
    refresh();
	int input;
	string message = "Bebidas\n";
	slow_print(message, 5);

	cout << "0 - Refrigerante                  1 - Corote" << endl;
	cout << "2 - Vinho                         3 - Suco em po" << endl;
	cout << "4 - Cafe em po                    5 - Capsula de cafe" << endl;
	cout << "6 - Suco                          7 - Vodka" << endl;
	cout << "8 - Cerveja                       9 - Energetico" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			refresh();
  			break;
		case 1:
			refresh();
			break;
		case 2:
			refresh();
			break;
		case 3:
			refresh();
			break;
		case 4:
			refresh();
			break;
		case 5:
			refresh();
			break;
		case 6:
			refresh();
			break;
		case 7:
			refresh();
			break;
		case 8:
			refresh();
			break;
		case 9:
			refresh();
			break;
		case 10:
		    menuCategoria();
			refresh();
			break;
		default:
			refresh();
			break;
    }
}
