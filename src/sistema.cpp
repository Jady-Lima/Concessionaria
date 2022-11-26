#include <iostream>
#include <sstream>
#include <string.h>
#include <algorithm>

#include "../include/sistema.h"

//CONSTRUTOR DA CLASSE
Sistema::Sistema()
{
    //SOLICITA O COMANDO DO USER
    cout << "Comando: " << endl;
    string comando;
    cin >> comando;

    //QUEBRA O COMANDO
    palavras = quebra_string(comando, " ");

    //COMPARA O QUE FAZER
    if (palavras[0] == "create-concessionaria")
    {
        cout << "O comando digitado foi " << palavras[0] << endl; 
    }
    
}

string Sistema::create_concessionaria (const string nome, string CNPJ, int estoque)
{
    //cria a concessionaria
    return "Implementar o create concessionaria";
}

//ENCERRA O PROGRAMA
string quit()
{
    return "Saindo...";
}

//QUEBRA A STRING ADD CADA PARTE EM UMA POSIÇÃO DO VETOR
vector<string> Sistema::quebra_string(string str, const char* op)
{
    vector<string> palavra;
    
    string resto = str, bloco;
    size_t posicao = resto.find_first_of(op);

    while (posicao != string::npos)
    {
        bloco = resto.substr(0, posicao);
        resto = resto.substr(posicao + 1);
        posicao = resto.find_first_of(op);
        palavra.push_back(bloco);
    }
    
    if (resto.length() > 0)
    {
        palavra.push_back(resto);
    }

    return palavra;
}

//DESTRUTOR DA CLASSE SISTEMA
Sistema::~Sistema()
{
    
}