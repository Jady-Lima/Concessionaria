//SISTEMA QUE CRIA AS CONCESSIONARIAS
#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
//#include "concessionaria.h"

using namespace std;

class Sistema
{
    private:
        //vector<Concessionaria> concessionarias;
        vector<string> palavras;
        
    public:
        //CONSTRUTOR DA CLASSE
        Sistema();

        //CRIA UMA CONCESSIONARIA
        void create_concessionaria (const string nome, string CNPJ, string estoque);

        //ADICIONA UM NOVO VEICULO A CONCESSIONARIA


        //REMOVE UM VEICULO DA CONCESSIONARIA


        //BUSCA UM VEICULO DENTRO DO VETOR CONCESSIONARIA


        //QUEBRA A STRING PARA DESCOBRIR QUAL O COMANDO
        vector<string> quebra_string(string str, const char* op);

        //ENCERRA O SISTEMA
        string quit();

        //DESTRUTOR DA CLASSE
        ~Sistema();
};

#endif