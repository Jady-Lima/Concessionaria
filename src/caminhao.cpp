#include "caminhao.h"

//CONSTRUTOR
Caminhao::Caminhao(string t_C) : Veiculo(chassi, marca, preco, ano_fabricacao){
    tipo_de_carga = t_C;
}

//DESTRUTOR
Caminhao::~Caminhao()
{

}