#include "../include/veiculos.h"

//CONSTRUTOR SEM PARAMETROS
Veiculo::Veiculo()
{
    setChassi("");
    setMarca("");
    setPreco(0);
    setAno_Fabricacao(0);
}

//FUNÇÃO DE ACESSO AO CHASSI
//Retorna: chassi do veiculo
string Veiculo::getChassi()
{
    return chassi;
}

//FUNÇÃO DE EDIÇÃO DO CHASSI
//Edita o chassi do veiculo
void Veiculo::setChassi(string c)
{
    chassi = c;
}

//FUNÇÃO DE ACESSO A MARCA
//Retorna a marca do veiculo
string Veiculo::getMarca()
{
    return marca;
}

//FUNÇÃO DE EDIÇÃO DA MARCA
//Edita a marca do veiculo
void Veiculo::setMarca(string m)
{
    marca = m;
}

//FUNÇÃO DE ACESSO AO PREÇO
//Retorna: o preço do veiculo
double Veiculo::getPreco()
{
    return preco;
}

//FUNÇÃO DE EDIÇÃO DO PREÇO
//Edita o Preço do veiculo
void Veiculo::setPreco(double p)
{
    preco = p;
}

//FUNÇÃO DE ACESSO AO ANO DE FABRICAÇÃO
//Retorna: ano de fabricação do veiculo
int Veiculo::getAno_Fabricacao()
{
    return ano_fabricacao;
}

//FUNÇÃO DE EDIÇÃO DO ANO DE FABRICAÇÃO
//Edita o ano de fabricação
void Veiculo::setAno_Fabricacao(int a)
{
    ano_fabricacao = a;
}
