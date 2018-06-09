#ifndef LISTAPRODUTOS_H_INCLUDED
#define LISTAPRODUTOS_H_INCLUDED

#include "Produto.h"
#include <iostream>

using namespace std;

class Lista
{
    struct Node
    {
        Produto info;
        Node* next;
    };

    typedef struct Node* NodePtr;

private:
    NodePtr primeiro;
    NodePtr atual;

public:
    Lista();
    ~Lista();
    bool estaNaLista(const Produto& elemento) const;
    bool insere(const Produto& elemento);
    bool retira(const Produto& elemento);
    bool estaVazia() const;
    bool estaCheia() const;
    bool pegaPrimeiro(Produto& elemento);
    bool pegaProximo(Produto& elemento);

    bool procuraX(const Produto& elemento, NodePtr& p, NodePtr& anterior) const; //NÃO É OPERADOR TAD
};


#endif // LISTAPRODUTOS_H_INCLUDED
