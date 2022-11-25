//SISTEMA QUE CRIA AS CONCESSIONARIAS
#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>

using namespace std;

class Sistema
{
    private:
        /* data */
    public:
        //CONSTRUTOR DA CLASSE
        Sistema(string arg);

        //CRIA UMA CONCESSIONARIA
        string create_concessionaria (const string nome, string CNPJ, int estoque);

        //ENCERRA O SISTEMA
        string quit();

        //DESTRUTOR DA CLASSE
        ~Sistema();
};

#endif