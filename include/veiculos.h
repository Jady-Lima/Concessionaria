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
        //CONSTRUTOR
        Veiculo();

        //ACESSO E EDIÇÃO DO CHASSI DO VEICULO
        string getChassi();
        void setChassi(string c);

        //ACESSO E EDIÇÃO DA MARCA DO VEICULO
        string getMarca();
        void setMarca(string m);

        //ACESSO E EDIÇÃO DO PREÇO DO VEICULO
        double getPreco();
        void setPreco(double p);

        //ACESSO E EDIÇÃO DO ANO DE FABRICAÇÃO DO VEICULO
        int getAno_Fabricacao();
        void setAno_Fabricacao(int a);
};

#endif
