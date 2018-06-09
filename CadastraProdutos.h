#ifndef CADASTRAPRODUTOS_H_INCLUDED
#define CADASTRAPRODUTOS_H_INCLUDED

#include <iostream>

#include "Produto.h"

void cadastraProdutos(Produto* produtos)
{
    produtos[0].setID(0);
    produtos[0].setNome("Refrigerante");

    produtos[1].setID(1);
    produtos[1].setNome("Corote");

    produtos[2].setID(2);
    produtos[2].setNome("Vinho");

    produtos[3].setID(3);
    produtos[3].setNome("Suco em po");

    produtos[4].setID(4);
    produtos[4].setNome("Cafe em po");

    produtos[5].setID(5);
    produtos[5].setNome("Capsula de cafe");

    produtos[6].setID(6);
    produtos[6].setNome("Suco");

    produtos[7].setID(7);
    produtos[7].setNome("Vodka");

    produtos[8].setID(8);
    produtos[8].setNome("Cerveja");

    produtos[9].setID(9);
    produtos[9].setNome("Energetico");

    produtos[10].setID(10);
    produtos[10].setNome("Coxa de frango");

    produtos[11].setID(11);
    produtos[11].setNome("Peito de frango");

    produtos[12].setID(12);
    produtos[12].setNome("Salmao");

    produtos[13].setID(13);
    produtos[13].setNome("Coxao mole");

    produtos[14].setID(14);
    produtos[14].setNome("Lombo suino");

    produtos[15].setID(15);
    produtos[15].setNome("Bacalhau");

    produtos[16].setID(16);
    produtos[16].setNome("Contra file");

    produtos[17].setID(17);
    produtos[17].setNome("Costela bovina");

    produtos[18].setID(18);
    produtos[18].setNome("Costela suina");

    produtos[19].setID(19);
    produtos[19].setNome("Camarao");

    produtos[20].setID(20);
    produtos[20].setNome("Cheddar");

    produtos[21].setID(21);
    produtos[21].setNome("Mussarela");

    produtos[22].setID(22);
    produtos[22].setNome("Queijo ralado");

    produtos[23].setID(23);
    produtos[23].setNome("Queijo prato");

    produtos[24].setID(24);
    produtos[24].setNome("Linguiça");

    produtos[25].setID(25);
    produtos[25].setNome("Queijo minas");

    produtos[26].setID(26);
    produtos[26].setNome("Salame");

    produtos[27].setID(27);
    produtos[27].setNome("Mortadela");

    produtos[28].setID(28);
    produtos[28].setNome("Presunto");

    produtos[29].setID(29);
    produtos[29].setNome("Salsicha");

    produtos[30].setID(30);
    produtos[30].setNome("Manga");

    produtos[31].setID(31);
    produtos[31].setNome("Tomate");

    produtos[32].setID(32);
    produtos[32].setNome("Beringela");

    produtos[33].setID(33);
    produtos[33].setNome("Beterraba");

    produtos[34].setID(34);
    produtos[34].setNome("Repolho");

    produtos[35].setID(35);
    produtos[35].setNome("Vagem");

    produtos[36].setID(36);
    produtos[36].setNome("Alho");

    produtos[37].setID(37);
    produtos[37].setNome("Cebola");

    produtos[38].setID(38);
    produtos[38].setNome("Banana");

    produtos[39].setID(39);
    produtos[39].setNome("Batata");

    produtos[40].setID(40);
    produtos[40].setNome("Saco de Lixo");

    produtos[41].setID(41);
    produtos[41].setNome("Lava Roupas");

    produtos[42].setID(42);
    produtos[42].setNome("Detergente");

    produtos[43].setID(43);
    produtos[43].setNome("Alcool");

    produtos[44].setID(44);
    produtos[44].setNome("Passa Roupas");

    produtos[45].setID(45);
    produtos[45].setNome("Alvejante");

    produtos[46].setID(46);
    produtos[46].setNome("Rodo");

    produtos[47].setID(47);
    produtos[47].setNome("Amaciante");

    produtos[48].setID(48);
    produtos[48].setNome("Sabao em po");

    produtos[49].setID(49);
    produtos[49].setNome("Odorizador");

    produtos[50].setID(50);
    produtos[50].setNome("Torrada");

    produtos[51].setID(51);
    produtos[51].setNome("Bolacha");

    produtos[52].setID(52);
    produtos[52].setNome("Pao Sirio");

    produtos[53].setID(53);
    produtos[53].setNome("Pao Integral");

    produtos[54].setID(54);
    produtos[54].setNome("Bisnaga");

    produtos[55].setID(55);
    produtos[55].setNome("Bolo");

    produtos[56].setID(56);
    produtos[56].setNome("Pao de Mel");

    produtos[57].setID(57);
    produtos[57].setNome("Pao de Forma");

    produtos[58].setID(58);
    produtos[58].setNome("Pao de Hot Dog");

    produtos[59].setID(59);
    produtos[59].setNome("Cocada");
}

//NO MAIN

/*
    Produto produtos[60];

    cadastraProdutos(produtos);
    for (int i = 0; i < 60; i++)
    {
        cout << produtos[i].getNome() << endl;
        cout << produtos[i].getID() << endl;
    }

*/


#endif // CADASTRAPRODUTOS_H_INCLUDED
