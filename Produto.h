#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>

using namespace std;

class Produto
{
private:
    int ID;
    string nome;

public:
    Produto(int novoID = 0, string novoNome = "");
    int getID() const;
    string getNome() const;
    void setID(int novoID);
    void setNome(string novoNome);

    friend void cadastraProdutos(Produto* produtos);
};

#endif
