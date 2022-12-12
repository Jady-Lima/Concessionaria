#ifndef SISTEMA_H
#define SISTEMA_H
#include <vector>
#include <string>
#include <iostream>
#include "concessionaria.h"
#include <sstream>
#include <algorithm>

using namespace std;

class Sistema {
  private:
		vector<string> dados;
		vector<Concessionaria> concessionarias;
		
  public:
		string quit();

		vector<Concessionaria> &getConcessionaria();
		void setConcessionaria(Concessionaria concessionaria);

		string create_concessionaria (const string nome);

		string add_car (const string nome);	
		string add_truck (const string nome);	
		string add_moto (const string nome);

		string search_vehicle(const string chassi);
		string remove_vehicle(const string chassi);
		string list_concessionaria(const string nome);
		string raise_price(const string nome);

		int search_concessionaria(const string nome);
		vector<string> quebra_string(string str, const char* op);

		void print_concessionaria();
};

#endif
