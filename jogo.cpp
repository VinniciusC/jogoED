#include <iostream>
#include <chrono>
#include <thread>
#include "ListaProdutos.h"
#include "CadastraProdutos.h"
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void refresh(){ //Limpa a tela tanto em windows quanto em linux
	if (system("CLS")) system("clear");
}

void slow_print(const  string &message, unsigned int millis_per_char){ //Funcao para dar o efeito de digitação nas mensagens
    for(const char c: message)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}

int prefacio(){ //Tela inicial que conta a história inicial 
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

    return opcao;
}

int lista_inicial(){ //Tela que gera a lista de compras aleatoriamente e printa na tela
    refresh();
    int opcao = 1;

    string message = "Aperte 0 para continuar...\n\n";
    slow_print(message, 30);

    while(opcao != 0){
        cin >> opcao;
    }

    return opcao;
}

int prefacio_2(){ //Tela que conta a história da perda da lista
    refresh();

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

    return opcao;
}

int main(){

    int opcao;

    opcao = prefacio();

    if(opcao == 0)
        opcao = lista_inicial();
        
    if(opcao == 0)
        opcao = prefacio_2();


    return 0;
}
