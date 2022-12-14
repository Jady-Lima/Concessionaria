#ifndef AUTOMOVEIS_H
#define AUTOMOVEIS_H
#include <iostream>

#include "veiculos.h"

using namespace std;

class Automoveis : public Veiculo
{
    protected:
        string tipo_de_motor;
        
    public:
        //CONSTRUTOR
        Automoveis(string t_m, string chassi, string marca, double preco, int ano_fabricacao);

        //ACESSO E EDIÇÃO AO TIPO DE MOTOR
        string getTipo_motor();
        void setTipo_motor(string t);
        
        //IMPRESSÃO DO CARRO
        void print_carro();
};

#endif
