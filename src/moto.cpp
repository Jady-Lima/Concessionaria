#include "moto.h"

//CONSTRUTOR
Moto::Moto(string m) : Veiculo(chassi, marca, preco, ano_fabricacao){
    modelo = m;
}

//DESTRUTOR
Moto::~Moto()
{

}