//SISTEMA QUE CRIA AS CONCESSIONARIAS
#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include <string>
#include "concessionaria.h"

using namespace std;

class Sistema
{
    private:
        vector<Concessionaria> concessionarias;
        
    public:
        //CONSTRUTOR DA CLASSE
        Sistema();

        //CRIA UMA CONCESSIONARIA
        string create_concessionaria (const string nome, string CNPJ, int estoque);

        //ADICIONA UM NOVO VEICULO A CONCESSIONARIA


        //REMOVE UM VEICULO DA CONCESSIONARIA


        //BUSCA UM VEICULO DENTRO DO VETOR CONCESSIONARIA



        //ENCERRA O SISTEMA
        string quit();

        //DESTRUTOR DA CLASSE
        ~Sistema();
};

#endif