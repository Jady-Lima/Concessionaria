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
        cout << "O comando digitado foi de criar " << palavras[0] << endl; 
    }

    else if (palavras[0] == "remove-vehicle")
    {
        cout << "O comando digitado foi de remover " << palavras[0] << endl; 
    }

    else if (palavras[0] == "search-vehicle")
    {
        cout << "O comando digitado foi busca" << palavras[0] << endl; 
    }
    
    else
    {
        vector<string> add_p;
        add_p = quebra_string(palavras[0], "-");

        if (add_p[0] == "add")  
        {
            if (add_p[1] == "car")
            {
                cout << "O comando digitado foi criar carro " << palavras[0] << endl; 
                cout << "Carro criado " << endl; 
            }

            else if (add_p[1] == "truck")
            {
                cout << "O comando digitado foi criar caminhao " << palavras[0] << endl; 
                cout << "Caminhão criado " << endl; 
            }

            else if (add_p[1] == "moto")
            {
                cout << "O comando digitado foi criar moto " << palavras[0] << endl; 
                cout << "Moto criada " << endl; 
            }
            
            else
            {
                cerr << "No match found, add";
                exit(1);
            }
            
        }

        else
        {
            cerr << "No match found, sistema";
            exit(1);
        }
        
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