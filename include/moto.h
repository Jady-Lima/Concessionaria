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
        Moto(string model, string chassi, string marca, double preco, int ano_fabricacao);

        string getModelo();
        void setModelo(string m);

        void print_Moto();
};

#endif
