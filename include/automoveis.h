#include <iostream>

#include "veiculo.h"

using namespace std;

class Automoveis : public Veiculo
{
    protected:
        string tipo_de_motor;
        
    public:
        //CONSTRUTOR
        Automoveis(string t_m) : Veiculo(chassi, marca, preco, ano_fabricacao){}

        //DESTRUTOR
        ~Automoveis();
};


