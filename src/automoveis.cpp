#include "../include/automoveis.h"

//CONSTRUTOR
//Recebe: dados do novo automovel
Automoveis::Automoveis(string t_m, string chassi, string marca, double preco, int ano_fabricacao)
{
    setTipo_motor(t_m);
    setMarca(marca);
    setPreco(preco);
    setChassi(chassi);
    setAno_Fabricacao(ano_fabricacao);
}

//FUNÇÃO DE ACESSO AO TIPO DE MOTOR
//Retorna: tipo de motor
string Automoveis::getTipo_motor()
{
    return tipo_de_motor;
}

//FUNÇÃO DE EDIÇÃO DO TIPO DE MOTOR
//Edita o tipo de motor
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