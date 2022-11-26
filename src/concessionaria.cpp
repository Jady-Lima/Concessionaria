#include "../include/concessionaria.h"

Concessionaria::Concessionaria(string n, string c, string e)
{
    estoque = e;
    nome = n;
    CNPJ = c;
    cout << "Consecionaria ok " << endl;
}

Concessionaria::~Concessionaria()
{

}
