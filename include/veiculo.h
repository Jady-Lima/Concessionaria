#include <iostream>

#include "concessionaria.h"

using namespace std;

class Veiculo : public Concessionaria
{
    protected:
        string chassi;
        string marca;
        double preco;
        int ano_fabricacao;

    public:
        //CONSTRUTOR
        Veiculo(string ch, string m, double p, int a) : Concessionaria(estoque, nome, CNPJ){}

        //DESTRUTOR
        ~Veiculo();
};


