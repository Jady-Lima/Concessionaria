#include "../include/concessionaria.h"
#include "../include/veiculo.h"

Concessionaria::Concessionaria(string n, string c, string e)
{
    estoque = e;
    nome = n;
    CNPJ = c;

    vector<Veiculo> v_car;
    vector<Veiculo> v_truck;
    vector<Veiculo> v_moto;

    cout << "Concessionaria ok " << endl;
}

Concessionaria::~Concessionaria()
{

}
