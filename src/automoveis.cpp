#include "../include/automoveis.h"

//CONSTRUTOR
Automoveis::Automoveis(string t_m, string chassi, string marca, double preco, int ano_fabricacao)
{
    setTipo_motor(t_m);
    setMarca(marca);
    setPreco(preco);
    setChassi(chassi);
    setAno_Fabricacao(ano_fabricacao);
    //print_carro();
}

//RETORNA O TIPO DE MOTOR
string Automoveis::getTipo_motor()
{
    return tipo_de_motor;
}

//EDITA O TIPO DE MOTOR
void Automoveis::setTipo_motor(string t)
{
    tipo_de_motor = t;
}

//IMPRIME OS DADOS DO CARRO
void Automoveis::print_carro() 
{
    cout << endl;
    cout << "TIPO DE MOTOR: " << getTipo_motor() << endl;
    cout << "MARCA: " << getMarca() << endl;
    cout << "PRECO: " << getPreco() << endl;
    cout << "CHASSI: " << getChassi() << endl;
    cout << "ANO DE FABRICACAO: " << getAno_Fabricacao() << endl;
}