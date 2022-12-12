#ifndef VEICULOS_H
#define VEICULOS_H
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Veiculo
{
    protected:
        string chassi;
        string marca;
        double preco;
        int ano_fabricacao;

    public:
        Veiculo();

        string getChassi();
        void setChassi(string c);

        string getMarca();
        void setMarca(string m);

        double getPreco();
        void setPreco(double p);

        int getAno_Fabricacao();
        void setAno_Fabricacao(int a);
};

#endif
