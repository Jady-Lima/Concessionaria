#include "automoveis.h"

//CONSTRUTOR
Automoveis::Automoveis(string t_m) : Veiculo(chassi, marca, preco, ano_fabricacao){
    tipo_de_motor = t_m;
}

//DESTRUTOR
Automoveis::~Automoveis()
{

}