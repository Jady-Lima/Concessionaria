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
        //CONSTRUTOR
        Caminhao(string tipo_carga, string chassi, string marca, double preco, int ano_fabricacao);

        //ACESSO E EDIÇÃO AO TIPO DE CARGA
        string getTipo_Carga();
        void setTipo_Carga(string t);

        //IMPRIME O CAMINHAO
        void print_caminhao();
};

#endif
