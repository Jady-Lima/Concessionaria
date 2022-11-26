//ASSINATURA DAS FUNÇÕES QUE CRIAM A CONCESSIONARIA
#include <iostream>

using namespace std;

class Concessionaria
{
    protected:
        string estoque;
        string nome;
        string CNPJ;
    
    public:
        //CONSTRUTOR DA CLASSE
        Concessionaria(string n, string c, string e);

        //DESTRUTOR DA CLASSE
        ~Concessionaria();
};
