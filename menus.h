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
	cout << "4 - LIMPEZA                       5 - PADARIA" << endl << endl;
	cout << "6 - Voltar para a casa" << endl;

	cin >> input;
	switch(input){
		case 0:
			if ((errados+certos)>=15){
				cout << "--" << endl;
			}
			refresh();
/*			menuBEBIDAS();
		case 1:
			if ((errados+certos)>=15){
					cout << "--" << endl;
			}
			refresh();
			menuCARNES();
		case 2:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}
			refresh();
			menuFRIOS();
		case 3:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			refresh();
			menuHORTIFRUTI();
		case 4:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			refresh();
			menuLIMPEZA();
		case 5:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			refresh();
			menuPADARIA();
		case 6:
			refresh();
			if(certos == 10 && errados == 0){
				cout << "Voc� voltou pra casa e sua m�e lhe disse que voc� n�o fez mais que sua obriga��o << endl;
			}else if (certos == 10 && errados <= 3 ){
				cout << "Voc� voltou pra casa e sua m�e ficou furiosa por ter comprado itens a mais" << endl;
			}else if ((errados+certos)>=15){
				cout << "--" << endl;
			}else if ((errados+certos)<10){
				cout << "Voc� voltou pra casa e sua m�e ficou furiosa" << endl;
			}else {
				cout << "Parab�ns, voc� atingiu um final que os programadores n�o pensaram" << endl;
			}
		default:
			refresh();
			menuCategoria();*/
	}
}

