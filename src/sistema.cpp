#include <iostream>
#include <sstream>
#include <algorithm>

#include "sistema.h"

using namespace std;

//CONSTRUTOR DA CLASSE
Sistema::Sistema()
{
    //SOLICITA O COMANDO DO USER
    cout << "Comando: " << endl;
    string comando;
    cin >> comando;

    //quebra o argumento recebido e descobre qual função chamar(criar, remover, add, buscar)
}

string Sistema::create_concessionaria (const string nome, string CNPJ, int estoque)
{
    //cria a concessionaria
}

//ENCERRA O PROGRAMA
string quit()
{
    return "Saindo...";
}

//DESTRUTOR DA CLASSE SISTEMA
Sistema::~Sistema()
{
    
}