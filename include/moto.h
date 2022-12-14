#ifndef MOTO_H
#define MOTO_H
#include <iostream>

#include "veiculos.h"

using namespace std;

class Moto : public Veiculo
{
    protected:
        string modelo;
        
    public:
        //CONSTRUTOR
        Moto(string model, string chassi, string marca, double preco, int ano_fabricacao);

        //ACESSO E EDIÇÃO DO MODELO DA MOTO
        string getModelo();
        void setModelo(string m);

        //IMPRIME OS DADOS DA MOTO
        void print_Moto();
};

#endif
