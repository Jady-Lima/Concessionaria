#include <iostream>
#include "../include/veiculo.h"

Veiculo::Veiculo(string ch, string m, double p, int a)
{
    chassi = ch;
    marca = m;
    preco = p;
    ano_fabricacao = a;
    cout << "Veiculo criado" << endl;
}

Veiculo::~Veiculo()
{
}