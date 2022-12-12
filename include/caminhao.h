#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>

#include "veiculos.h"

using namespace std;

class Caminhao : public Veiculo
{
    protected:
        string tipo_de_carga;
        
    public:
        Caminhao(string tipo_carga, string chassi, string marca, double preco, int ano_fabricacao);

        string getTipo_Carga();
        void setTipo_Carga(string t);

        void print_caminhao();
};

#endif
