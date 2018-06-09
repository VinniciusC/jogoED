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
    string message = "Voce esta no mercado\n";
	slow_print(message, 30);

	cout << "0 - BEBIDAS                       1 - CARNES" << endl;
	cout << "2 - FRIOS                         3 - HORTIFRUTI" << endl;
	cout << "4 - PRODUTOS DE LIMPEZA           5 - PADARIA" << endl;
	cout << endl;
	cout << "6 - Voltar para casa" << endl;

	cin >> input;
	switch(input){
		case 0: 
  			menuBEBIDAS();
  			break;
  		case 1:
			menuCARNES();
			break;
		case 2:
			menuFRIOS();
			break;
		case 3:
			menuHORTIFRUTI();
			break;
		case 4:
			menuLIMPEZA();
			break;
		case 5:
			menuPADARIA();
			break;
		case 6:
			break;
		default:
			menuCategoria();
			break;
	}
}

void menuBEBIDAS(){
    refresh();
	int input;
	string message = "Bebidas\n";
	slow_print(message, 80);

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
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			 
			break;
    }
}

void menuCARNES(){
    refresh();
	int input;
	string message = "Carnes\n";
	slow_print(message, 80);

	cout << "0 - Coxa de frango                1 - Peito de frango" << endl;
	cout << "2 - Salmao                        3 - Coxao mole" << endl;
	cout << "4 - Lombo suino                   5 - Bacalhau" << endl;
	cout << "6 - Contra file                   7 - Costela bovina" << endl;
	cout << "8 - Costela suina                 9 - Camarao" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			 
			break;
    }
}

void menuFRIOS(){
    refresh();
	int input;
	string message = "Frios\n";
	slow_print(message, 80);

	cout << "0 - Cheddar                       1 - Mussarela" << endl;
	cout << "2 - Queijo ralado                 3 - Queijo prato" << endl;
	cout << "4 - Linguica                      5 - Queijo minas" << endl;
	cout << "6 - Salame                        7 - Presunto" << endl;
	cout << "8 - Presunto                      9 - Salsicha" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			 
			break;
    }
}

void menuHORTIFRUTI(){
    refresh();
	int input;
	string message = "Hortifruti\n";
	slow_print(message, 80);

	cout << "0 - Manga                         1 - Tomate" << endl;
	cout << "2 - Berinjela                     3 - Beterraba" << endl;
	cout << "4 - Repolho                       5 - Vagem" << endl;
	cout << "6 - Alho                          7 - Cebola" << endl;
	cout << "8 - Banana                        9 - Batata" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			 
			break;
    }
}

void menuLIMPEZA(){
    refresh();
	int input;
	string message = "Produtos de Limpeza\n";
	slow_print(message, 80);

	cout << "0 - Saco de lixo                  1 - Lava roupas" << endl;
	cout << "2 - Detergente                    3 - Alcool" << endl;
	cout << "4 - Passa roupas                  5 - Alvejante" << endl;
	cout << "6 - Rodo                          7 - Amaciante" << endl;
	cout << "8 - Sabao em po                   9 - Odorizador" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			break;
    }
}

void menuPADARIA(){
    refresh();
	int input;
	string message = "Padaria\n";
	slow_print(message, 80);

	cout << "0 - Torrada                       1 - Biscoito" << endl;
	cout << "2 - Pao sirio                     3 - Pao integral" << endl;
	cout << "4 - Bisnaga                       5 - Bolo" << endl;
	cout << "6 - Pao de mel                    7 - Pao de forma" << endl;
	cout << "8 - Pao de hot dog                9 - Cocada" << endl;
	cout << endl;
	cout << "10 - Voltar" << endl;

	cin >> input;
	switch(input){
		case 0:
			 
  			break;
		case 1:
			 
			break;
		case 2:
			 
			break;
		case 3:
			 
			break;
		case 4:
			 
			break;
		case 5:
			 
			break;
		case 6:
			 
			break;
		case 7:
			 
			break;
		case 8:
			 
			break;
		case 9:
			 
			break;
		case 10:
		    menuCategoria();
			 
			break;
		default:
			 
			break;
    }
}
