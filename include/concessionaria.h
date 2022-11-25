//ASSINATURA DAS FUNÇÕES QUE CRIAM A CONCESSIONARIA
#include <iostream>

using namespace std;

class Concessionaria
{
    protected:
        int estoque;
        string nome;
        string CNPJ;
    
    public:
        //CONSTRUTOR DA CLASSE
        Concessionaria(int e, string n, string c);

        //DESTRUTOR DA CLASSE
        ~Concessionaria();
};
