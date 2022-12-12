#include "../include/veiculos.h"

//CONSTRUTOR SEM PARAMETROS
Veiculo::Veiculo()
{
    setChassi("");
    setMarca("");
    setPreco(0);
    setAno_Fabricacao(0);
}

//RETORNA O CHASSI DO VEICULO
string Veiculo::getChassi()
{
    return chassi;
}

//EDITA O CHASSI DO VEICULO
void Veiculo::setChassi(string c)
{
    chassi = c;
}

//RETORNA A MARCA DO VEICULO
string Veiculo::getMarca()
{
    return marca;
}

//EDITA A MARCA DO VEICULO
void Veiculo::setMarca(string m)
{
    marca = m;
}

//RETORNA O PRECO DO VEICULO
double Veiculo::getPreco()
{
    return preco;
}

//EDITA O PRECO DO VEICULO
void Veiculo::setPreco(double p)
{
    preco = p;
}

//RETORNA O ANO DE FABRICACAO DO VEICULO
int Veiculo::getAno_Fabricacao()
{
    return ano_fabricacao;
}

//EDITA O ANO DE FABRICACAO DO VEICULO
void Veiculo::setAno_Fabricacao(int a)
{
    ano_fabricacao = a;
}
