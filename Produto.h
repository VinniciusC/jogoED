#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED

#include <iostream>

using namespace std;

class Produto
{
public:
    Produto(int novoID=0, string novoNome="");
    int getID() const;
    string getNome() const;
    void setID(int novoID);
    void setNome(string novoNome);

private:
    int ID;
    string nome;
};

#endif // PRODUTO_H_INCLUDED
