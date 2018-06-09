#include <iostream>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif
#pragma once
#include <chrono>
#include <thread>

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void refresh(){
	if (system("CLS")) system("clear");
}

void slow_print(const  string &message, unsigned int millis_per_char){ //Funcao para dar o efeito de digita��o nas mensagens
    for(const char c: message)
    {
        cout << c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}


