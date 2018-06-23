#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>

using namespace std;

class Produto
{
private:
    int ID;
    string nome;
    string departamento;

public:
    Produto(int novoID = 0, string novoNome = "", string novoDepartamento="");
    int getID() const;
    string getNome() const;
    string getDepartamento() const;
    void setID(int novoID);
    void setNome(string novoNome);
    void setDepartamento(string novoDepartamento);

    friend void cadastraProdutos(Produto* produtos);
};

#endif
