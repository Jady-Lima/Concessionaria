#include "../include/moto.h"

//CONSTRUTOR
Moto::Moto(string model, string chassi, string marca, double preco, int ano_fabricacao)
{
    setModelo(model);
    setChassi(chassi);
    setMarca(marca);
    setPreco(preco);
    setAno_Fabricacao(ano_fabricacao);
    //print_Moto();
}

//RETORNA O TIPO DE MODELO
string Moto::getModelo()
{
    return modelo;
}

//EDITA O TIPO DE MODELO
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