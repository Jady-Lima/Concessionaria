#include <iostream>

#include "veiculo.h"

using namespace std;

class Caminhao : public Veiculo
{
    protected:
        string tipo_de_carga;
        
    public:
        //CONSTRUTOR
        Caminhao(string t_C) : Veiculo(chassi, marca, preco, ano_fabricacao){}

        //DESTRUTOR
        ~Caminhao();
};


