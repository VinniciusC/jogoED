#include "ModulosComuns.h"

void refresh()
{
	if (system("CLS")) system("clear");
}

void printDevagar(const string& mensagem, unsigned int milisegundosPorChar)
{
    for(const char c: mensagem)
    {
        cout << c << flush;
        sleep_for(milliseconds(milisegundosPorChar));
    }
}
