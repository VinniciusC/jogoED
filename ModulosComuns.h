#pragma once

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <time.h>

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void refresh();
void printDevagar(const string& mensagem, unsigned int milisegundosPorChar); //Funcao para dar o efeito de digitacao nas mensagens
