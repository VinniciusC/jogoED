#include "ListaProdutos.h"

#include <iostream>

using namespace std;

// ********** OPERADORES TAD **********

Lista::Lista()
{
    primeiro = NULL;
    atual = NULL;
}

Lista::~Lista()
{
    Produto elemento;

    if (pegaPrimeiro(elemento))
    {
        retira(elemento);

        while (pegaProximo(elemento))
            retira(elemento);
    }
}


bool Lista::estaNaLista(const Produto& elemento) const
{
    NodePtr p, anterior;

    if (procuraX(elemento, p, anterior))
        return true;
    else
        return false;
}


bool Lista::insere(const Produto& elemento)
{
    NodePtr p, anterior, novoNo;

    if (procuraX(elemento, p, anterior) == false)
    {
        novoNo = new Node;
        novoNo->info = elemento;
        novoNo->next = p;

        if (p != primeiro)
            anterior->next = novoNo;
        else
            primeiro = novoNo;

        novoNo = NULL;
        anterior = NULL;
        p = NULL;

        return true;
    }
    else
        return false;
}


bool Lista::retira(const Produto& elemento)
{
    NodePtr p, anterior;

    if (procuraX(elemento, p, anterior))
    {
        if (p != primeiro)
            anterior->next = p->next;
        else
            primeiro = primeiro->next;

        delete p;
        anterior = NULL;
        p = NULL;

        return true;
    }
    else
        return false;
}


bool Lista::estaVazia() const
{
    if (primeiro == NULL)
        return true;
    else
        return false;
}


bool Lista::estaCheia() const
{
    return false;
}


bool Lista::pegaPrimeiro(Produto& elemento)
{
    atual = primeiro;

    if (atual != NULL)
    {
        elemento = atual->info;
        return true;
    }
    else
        return false;
}


bool Lista::pegaProximo(Produto& elemento)
{
    if (atual != NULL)
        atual = atual->next;

    if (atual != NULL)
    {
        elemento = atual->info;
        return true;
    }
    else
        return false;
}


// ********** OPERADOR AUXILIAR **********


bool Lista::procuraX(const Produto& elemento, NodePtr& p, NodePtr& anterior) const
{
    p = primeiro;
    anterior = NULL;

    while ( (p != NULL) && (p->info.getID() != elemento.getID()) )
    {
        anterior = p;
        p = p->next;
    }

    if ( (p != NULL) && (p->info.getID() == elemento.getID()) )
        return true;
    else
        return false;
}
