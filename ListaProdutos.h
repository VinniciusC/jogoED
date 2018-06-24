#ifndef LISTAPRODUTOS_H
#define LISTAPRODUTOS_H

#include "Produto.h"

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

    //******************** OPERADORES TAD ********************
    Lista();
    ~Lista();
    bool estaNaLista(const Produto& elemento) const;
    bool insere(const Produto& elemento);
    bool retira(const Produto& elemento);
    bool estaVazia() const;
    bool estaCheia() const;
    bool pegaPrimeiro(Produto& elemento);
    bool pegaProximo(Produto& elemento);

    //******************** OPERADORES AUXILIARES ********************
    bool procuraX(const Produto& elemento, NodePtr& p, NodePtr& anterior) const;
    void imprimeLista();
    int quantidadeElementos();

    //******************** METODOS AMIGOS ********************
    friend void geraListaAletoria(Produto* produtos, Lista& l);
    friend void quantidadeCertosErrados(Lista& comprasMae, Lista& comprasFilho, int& certos, int& errados);
};


#endif
