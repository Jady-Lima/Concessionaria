#include "../include/caminhao.h"

//CONSTRUTOR
Caminhao::Caminhao(string tipo_carga, string chassi, string marca, double preco, int ano_fabricacao)
{
    setTipo_Carga(tipo_carga);
    setChassi(chassi);
    setMarca(marca);
    setPreco(preco);
    setAno_Fabricacao(ano_fabricacao);
    //print_caminhao();
}

//FUNÇÃO DE ACESSO AO TIPO DE CARGA
//Retorna: tipo de carga do caminhão
string Caminhao::getTipo_Carga()
{
    return tipo_de_carga;
}

//FUNÇÃO DE EDIÇÃO DO TIPO DE CARGA
//Edita o tipo de carga
void Caminhao::setTipo_Carga(string t)
{
    tipo_de_carga = t;
}

//IMPRIME OS DADOS DO CAMINHAO
void Caminhao::print_caminhao() 
{
    cout << endl;
    cout << "TIPO DE CARGA: " << getTipo_Carga() << endl;
    cout << "MARCA: " << getMarca() << endl;
    cout << "PRECO: " << getPreco() << endl;
    cout << "CHASSI: " << getChassi() << endl;
    cout << "ANO DE FABRICACAO: " << getAno_Fabricacao() << endl;
}