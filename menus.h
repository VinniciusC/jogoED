#include <iostream>
#include "funcoes_comuns.h"

using namespace std;

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

