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

        vector<Automoveis> &getAutomoveis();
        void setAutomoveis(Automoveis automoveis);        

        vector<Caminhao> &getCaminhao();
        void setCaminhao(Caminhao caminhao); 

        vector<Moto> &getMoto();
        void setMoto(Moto moto);   

        string getNome();
        void setNome(string n);

        string getCnpj();
        void setCnpj(string c);

        int getEstoque();
        void setEstoque(int e);

        int indexCar(string chassi);
        int indexTruck(string chassi);
        int indexMoto(string chassi);

        bool search_vehicle(string chassi);
        bool remove_vehicle(string chassi);
};

#endif