#include <iostream>

#include "veiculo.h"

using namespace std;

class Moto : public Veiculo
{
    protected:
        string modelo;
        
    public:
        //CONSTRUTOR
        Moto(string m) : Veiculo(chassi, marca, preco, ano_fabricacao){}

        //DESTRUTOR
        ~Moto();
};


