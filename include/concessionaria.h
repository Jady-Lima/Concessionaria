#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H
#include <iostream>
#include <algorithm>
#include "veiculos.h"
#include "automoveis.h"
#include "moto.h"
#include "caminhao.h"

using namespace std;

class Concessionaria
{
    protected:
        int estoque;
        string nome;
        string CNPJ;
        double valor_carros;
        double valor_caminhoes;
        double valor_motos;

        vector<Automoveis> v_car;
        vector<Caminhao> v_truck;
        vector<Moto> v_moto;
    
    public:
        //CONSTRUTOR DA CLASSE
        Concessionaria(string n, string c, int e);

        //ACESSO E EDIÇÃO AO VETOR DE AUTOMOVEIS
        vector<Automoveis> &getAutomoveis();
        void setAutomoveis(Automoveis automoveis);        

        //ACESSO E EDIÇÃO AO VETOR DE CAMINHOES
        vector<Caminhao> &getCaminhao();
        void setCaminhao(Caminhao caminhao); 

        //ACESSO E EDIÇÃO AO VETOR DE MOTO
        vector<Moto> &getMoto();
        void setMoto(Moto moto);   

        //ACESSO E EDIÇÃO DE NOME DA CONCESSIONARIA
        string getNome();
        void setNome(string n);

        //ACESSO E EDIÇÃO DE CNPJ DA CONCESSIONARIA
        string getCnpj();
        void setCnpj(string c);

        //ACESSO E EDIÇÃO DO ESTOQUE DA CONCESSIONARIA
        int getEstoque();
        void setEstoque(int e);

        //RETORNA O INDICE QUE ESTÁ CADA VEICULO
        int indexCar(string chassi);
        int indexTruck(string chassi);
        int indexMoto(string chassi);

        //PESQUISA VEICULOS NO VETOR
        bool search_vehicle(string chassi);

        //REMOVE VEICULO DO VETOR
        bool remove_vehicle(string chassi);
};

#endif