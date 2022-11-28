#include <iostream>
#include <vector>

using namespace std;

class Veiculo
{
    protected:
        string chassi;
        string marca;
        double preco;
        int ano_fabricacao;

    public:
        //CONSTRUTOR
        Veiculo(string ch, string m, double p, int a);

        //DESTRUTOR
        ~Veiculo();
};


