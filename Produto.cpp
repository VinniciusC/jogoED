#include "Produto.h"

#include <iostream>

using namespace std;

int Produto::getID() const
{
    return ID;
}

string Produto::getNome() const
{
    return nome;
}

void Produto::setID(int novoID)
{
    ID = novoID;
}

void Produto::setNome(string novoNome)
{
    nome = novoNome;
}
