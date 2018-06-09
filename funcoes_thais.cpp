/*#include <iostream>
#include "ListaProdutos.h"
#include "Produto.h"
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif
using namespace std;

void imprime(Lista& l1)
{
    Produto elemento;
    int contador = 1;

    if (l1.pegaPrimeiro(elemento))
    {
        cout << "elemento 0: " << elemento.getNome() << endl;;

        while (l1.pegaProximo(elemento))
        {
            cout << "elemento " << contador << ": " << elemento.getNome() << endl;
            contador++;
        }

        cout << endl;
    }
}


void gerarFilaMem(Produto* produtos){
	Lista Lista2;
	int n[10];

	for(int i = 0; i < 10; i++){
		n[i] = rand() % 60;
		for(int k=0; k<i; k++)
		{
			if(n[k] == n[i])
			{
				n[k] = rand()%60;
				k=0;
			}
		}
		for(int j = 0; j < 60; j++){
			if(n[i] == produtos[j].getID()){
				Lista2.insere(produtos[j]);
			}
		}
	}

	imprime(Lista2);
	refresh();
	menuCategoria();

}

void menuBEBIDAS(){
	int input;
	cout << "Digite 0 para comprar..." << produto[0].getNome() << endl;
	cout << "Digite 1 para comprar..." << produto[1].getNome() << endl;
	cout << "Digite 2 para comprar..." << produto[2].getNome() << endl;
	cout << "Digite 3 para comprar..." << produto[3].getNome() << endl;
	cout << "Digite 4 para comprar..." << produto[4].getNome() << endl;
	cout << "Digite 5 para comprar..." << produto[5].getNome() << endl;
	cout << "Digite 6 para comprar..." << produto[6].getNome() << endl;
	cout << "Digite 7 para comprar..." << produto[7].getNome() << endl;
	cout << "Digite 8 para comprar..." << produto[8].getNome() << endl;
	cout << "Digite 9 para comprar..." << produto[9].getNome() << endl;
	cout << "Digite 10 para voltar" << endl;

	cin >> input;

	switch(input){
		case 0:
			refresh();
			compararProduto(produto[0]);
		case 1:
			refresh();
			compararProduto(produto[1]);
		case 2:
			refresh();
			compararProduto(produto[2]);
		case 3:
			refresh();
			compararProduto(produto[3]);
		case 4:
			refresh();
			compararProduto(produto[4]);
		case 5:
			refresh();
			compararProduto(produto[5]);
		case 6:
			refresh();
			compararProduto(produto[6]);
		case 7:
			refresh();
			compararProduto(produto[7]);
		case 8:
			refresh();
			compararProduto(produto[8]);
		case 9:
			refresh();
			compararProduto(produto[9]);
		case 10:
			refresh();
			menuCategoria();
		default:
			refresh();
			menuCategoria();
	}


}



void menuCategoria(){
	int input;
	cout << "Digite 0 para ir no setor BEBIDAS" << endl;
	cout << "Digite 1 para ir no setor CARNES" << endl;
	cout << "Digite 2 para ir no setor FRIOS" << endl;
	cout << "Digite 3 para ir no setor HORTIFRUTI" << endl;
	cout << "Digite 4 para ir no setor LIMPEZA" << endl;
	cout << "Digite 5 para ir no setor PADARIA" << endl;
	cout << "Digite 6 para sair do jogo" << endl;

	cin >> input;
	switch(input){
		case 0:
			refresh();
			menuBEBIDAS();
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
			menuCategoria();
	}
}

void refresh(){
	if (system("CLS")) system("clear");
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
    menuCategoria();
}

int main(){
	Produto produtos[60];
    listaProduto(produtos);
	int opcao;

    opcao = prefacio();

    if (opcao == 0)
    {
        opcao = 1;

        cout << "Aperte 0 para continuar..." << endl << endl;

        while(opcao != 0){
            cin >> opcao;
        }

    }

    if(opcao == 0)
        opcao = prefacio_2();

	cout << "aaa" << endl;
	refresh();
	cout << "bbb" << endl;

	return 0;
}
*/
