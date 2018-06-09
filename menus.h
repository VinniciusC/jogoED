#include <iostream>
#include "funcoes_comuns.h"
#include "TelaMemorizar.h"
#include "ListaProdutos.h"

using namespace std;

int errados = 0;
int certos = 0;

void menuCategoria(Produto* produtos, Lista& l);
void menuBEBIDAS(Produto* produtos, Lista& l);
void menuCARNES(Produto* produtos, Lista& l);
void menuFRIOS(Produto* produtos, Lista& l);
void menuHORTIFRUTI(Produto* produtos, Lista& l);
void menuLIMPEZA(Produto* produtos, Lista& l);
void menuPADARIA(Produto* produtos, Lista& l);

void verificacao(Produto* produtos, Lista& l, int IDInterno);

void menuCategoria(Produto* produtos, Lista& l){
    refresh();
	int input;
    string message = "Voce esta no mercado\n";
	slow_print(message, 30);

	cout << "0 - BEBIDAS                       1 - CARNES" << endl;
	cout << "2 - FRIOS                         3 - HORTIFRUTI" << endl;
	cout << "4 - PRODUTOS DE LIMPEZA           5 - PADARIA" << endl <<endl;
	cout << "6 - Voltar para casa" << endl;
	
	cin >> input;
	switch(input){
		case 0:
			if ((errados+certos)>=15){
				cout << "--" << endl;
			}
			menuBEBIDAS(produtos, l);
			break;
		case 1:
			if ((errados+certos)>=15){
					cout << "--" << endl;
			}
			menuCARNES(produtos, l);
			break;
		case 2:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}
			menuFRIOS(produtos, l);
			break;
		case 3:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			menuHORTIFRUTI(produtos, l);
			break;
		case 4:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			menuLIMPEZA(produtos, l);
			break;
		case 5:
			if ((errados+certos)>=15){
						cout << "--" << endl;
			}		
			menuPADARIA(produtos, l);
			break;
		case 6:
			if(certos == 10 && errados == 0){
				cout << "Voce voltou pra casa e sua mae lhe disse que você nao fez mais que sua obrigacao" << endl;
			}else if (certos == 10 && errados <= 3 ){
				cout << "Voce voltou pra casa e sua mae ficou furiosa por ter comprado itens a mais" << endl;
			}else if ((errados+certos)>=15){
				cout << "--" << endl;
			}else if ((errados+certos)<10){
				cout << "Voce voltou pra casa e sua mae ficou furiosa" << endl;
			}else {
				cout << "Parabens, você atingiu um final que os programadores nao pensaram" << endl;
			}
			break;
		default:
			refresh();
			menuCategoria(produtos, l);
			break;
	}
	}

void menuBEBIDAS(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 0;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
  			break;
		case 1:
            IDinterno = 1;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 2:
            IDinterno = 2;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 3:
            IDinterno = 3;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 4:
            IDinterno = 4;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 5:
            IDinterno = 5;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 6:
            IDinterno = 6;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 7:
            IDinterno = 7;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 8:
            IDinterno = 8;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 9:
            IDinterno = 9;
			verificacao(produtos, l, IDinterno);
			menuBEBIDAS(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);

			break;
		default:
            menuBEBIDAS(produtos, l);
			break;
    }
}

void menuCARNES(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 10;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
  			break;
		case 1:
            IDinterno = 11;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 2:
            IDinterno = 12;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 3:
            IDinterno = 13;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 4:
            IDinterno = 14;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 5:
            IDinterno = 15;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 6:
            IDinterno = 16;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 7:
            IDinterno = 17;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 8:
            IDinterno = 18;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 9:
            IDinterno = 19;
			verificacao(produtos, l, IDinterno);
			menuCARNES(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);
			break;
		default:
            menuCARNES(produtos, l);
			break;
    }
}

void menuFRIOS(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 20;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
  			break;
		case 1:
            IDinterno = 21;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 2:
            IDinterno = 22;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 3:
            IDinterno = 23;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 4:
            IDinterno = 24;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 5:
            IDinterno = 25;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 6:
            IDinterno = 26;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 7:
            IDinterno = 27;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 8:
            IDinterno = 28;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 9:
            IDinterno = 29;
			verificacao(produtos, l, IDinterno);
			menuFRIOS(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);
			break;
		default:
            menuFRIOS(produtos, l);
			break;
    }
}

void menuHORTIFRUTI(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 30;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
  			break;
		case 1:
            IDinterno = 31;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 2:
            IDinterno = 32;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 3:
            IDinterno = 33;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 4:
            IDinterno = 34;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 5:
            IDinterno = 35;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 6:
            IDinterno = 36;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 7:
            IDinterno = 37;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 8:
            IDinterno = 38;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 9:
            IDinterno = 39;
			verificacao(produtos, l, IDinterno);
			menuHORTIFRUTI(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);
			break;
		default:
            menuHORTIFRUTI(produtos, l);
			break;
    }
}

void menuLIMPEZA(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 40;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
  			break;
		case 1:
            IDinterno = 41;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 2:
            IDinterno = 42;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 3:
            IDinterno = 43;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 4:
            IDinterno = 44;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 5:
            IDinterno = 45;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 6:
            IDinterno = 46;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 7:
            IDinterno = 47;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 8:
            IDinterno = 48;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 9:
            IDinterno = 49;
			verificacao(produtos, l, IDinterno);
			menuLIMPEZA(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);
			break;
		default:
			menuLIMPEZA(produtos, l);
			break;
    }
}

void menuPADARIA(Produto* produtos, Lista& l){
    refresh();
	int input, IDinterno;
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
            IDinterno = 50;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
  			break;
		case 1:
            IDinterno = 51;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 2:
            IDinterno = 52;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 3:
            IDinterno = 53;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 4:
            IDinterno = 54;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 5:
            IDinterno = 55;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 6:
            IDinterno = 56;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 7:
            IDinterno = 57;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 8:
            IDinterno = 58;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 9:
            IDinterno = 59;
			verificacao(produtos, l, IDinterno);
			menuPADARIA(produtos, l);
			break;
		case 10:
		    menuCategoria(produtos,l);
			break;
		default:
            menuCategoria(produtos,l);
			break;
    }
}

void verificacao(Produto* produtos, Lista& l, int IDinterno)
{
    //int lixo;
    if (l.estaNaLista(produtos[IDinterno]))
        certos++;
    else
        errados++;

    //cout << "ACERTOS: " << acertos << ", ERROS: " << erros << endl;
    //cin >> lixo;

    string message = "Voce comprou " + produtos[IDinterno].getNome() + ".........";
    slow_print(message, 30);
};

