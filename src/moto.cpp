#include "../include/moto.h"

//CONSTRUTOR
//Recebe: dados da nova moto
Moto::Moto(string model, string chassi, string marca, double preco, int ano_fabricacao)
{
    setModelo(model);
    setChassi(chassi);
    setMarca(marca);
    setPreco(preco);
    setAno_Fabricacao(ano_fabricacao);
    //print_Moto();
}

//FUNÇÃO DE ACESSO AO MODELO DA MOTO
//Retorna: Modelo da moto
string Moto::getModelo()
{
    return modelo;
}

//FUNÇÃO DE EDIÇÃO AO MODELO DA MOTO
//Edita o modelo da moto
void Moto::setModelo(string m)
{
    modelo = m;
}

//IMPRIME OS DADOS DA MOTO
void Moto::print_Moto() 
{
    cout << endl;
    cout << "MODELO: " << getModelo() << endl;
    cout << "MARCA: " << getMarca() << endl;
    cout << "PRECO: " << getPreco() << endl;
    cout << "CHASSI: " << getChassi() << endl;
    cout << "ANO DE FABRICACAO: " << getAno_Fabricacao() << endl;
}