#include "../include/sistema.h"

//CONSTRUTOR DA CLASSE
Sistema::Sistema()
{
    char comando[80];
    while (1)
    {
        //SOLICITA O COMANDO DO USER
        cout << "Comando: " << endl;
        cin.getline(comando, 80);

        //QUEBRA O COMANDO
        palavras = quebra_string(comando, " ");

        //COMPARA O QUE FAZER
        if (palavras[0] == "quit")
        {
            quit();
        }
        
        else if (palavras[0] == "create-concessionaria")
        {
            concessionarias.push_back(create_concessionaria(palavras[1], palavras[2], palavras[3])); 
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
}

Concessionaria Sistema::create_concessionaria (string name, string cnpj, string est)
{
    //cria a concessionaria
    cout << "nome: " << name << " CNPJ: " << cnpj << " estoque: " << est << endl;
    Concessionaria n_cons(name, cnpj, est);
    return n_cons;
}

//ENCERRA O PROGRAMA
void Sistema::quit()
{
    cout << "Saindo...";
    exit(1);
}

//QUEBRA A STRING ADD CADA PARTE EM UMA POSIÇÃO DO VETOR
vector<string> Sistema::quebra_string(string str, const char* op)
{
    vector<string> p;

    //variaveis que serão usadas no codigo
    string resto = str, bloco;
    size_t operator_position = resto.find_first_of(op);

    //loop que quebra a string
    while (operator_position != string::npos)
    {
        bloco = resto.substr(0, operator_position);
        resto = resto.substr(operator_position + 1);
        operator_position = resto.find_first_of(op);
        p.push_back(bloco);
    }

    //if que que adiciona o resto ao vector se for maior que zero
    if (resto.length() > 0)
    {
        p.push_back(resto);
    }

    return p;  
}

//DESTRUTOR DA CLASSE SISTEMA
Sistema::~Sistema()
{
    
}