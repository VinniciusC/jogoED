#include "Produto.h"

Produto::Produto(int novoID, string novoNome, string novoDepartamento)
{
    setID(novoID);
    setNome(novoNome);
    setDepartamento(novoDepartamento);
}

int Produto::getID() const
{
    return ID;
}

string Produto::getNome() const
{
    return nome;
}

string Produto::getDepartamento() const
{
    return departamento;
}

void Produto::setID(int novoID)
{
    ID = novoID;
}

void Produto::setNome(string novoNome)
{
    nome = novoNome;
}

void Produto::setDepartamento(string novoDepartamento)
{
    departamento = novoDepartamento;
}
