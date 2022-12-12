#include "../include/sistema.h"

//CHAMA A FUNÇÃO QUE ENCERRA O PROGRAMA
string Sistema::quit() 
{
    return "Saindo...";
}

//CHAMA A FUNÇÃO QUE CRIA A CONCESSIONARIA
string Sistema::create_concessionaria (const string nome) 
{
    dados = quebra_string(nome, " ");

    Concessionaria n_con(dados[0], dados[1], stoi(dados[2]));
    setConcessionaria(n_con);
    
    return "create_concessionaria";
}

//RETORNA O VETOR DE CONCESSIONARIAS
vector<Concessionaria> &Sistema::getConcessionaria()
{
    return concessionarias;
}

//ADICIONA AO VETOR DE CONCESSIONARIA
void Sistema::setConcessionaria(Concessionaria concessionaria)
{
    concessionarias.push_back(concessionaria);
}

//QUEBRA A STRING ADD CADA PARTE EM UMA POSIÇÃO DO VETOR
vector<string> Sistema::quebra_string(string str, const char* op) 
{
    vector<string> p;

    string resto = str, bloco;
    size_t operator_position = resto.find_first_of(op);

    while (operator_position != string::npos)
    {
        bloco = resto.substr(0, operator_position);
        resto = resto.substr(operator_position + 1);
        operator_position = resto.find_first_of(op);
        p.push_back(bloco);
    }

    if (resto.length() > 0)
    {
        p.push_back(resto);
    }

    return p;  
}

//IMPRIME O VETOR DE CONCESSIONARIAS
void Sistema::print_concessionaria() 
{
    for (int i = 0; i < (int)concessionarias.size(); i++)
    {
      cout << "Concessionaria: " << concessionarias[i].getNome() << endl;
      cout << "CNPJ: " << concessionarias[i].getCnpj() << endl;
      cout << "Estoque: " << concessionarias[i].getEstoque() << endl << endl;
    } 
}

//ADICIONA UM NOVO CARRO
string Sistema::add_car(const string nome)
{
    dados = quebra_string(nome, " ");
    int i = search_concessionaria(dados[0]);

    if (i == -1)
    {
      return "Concessionaria nao encontrada\n";
    }
    

    if(getConcessionaria().at(i).search_vehicle(dados[3]))
    {
      cout << "ERRO - Veiculo " << dados[3] << " ja adicionado a concessionaria " << dados[0] << endl;
      return " ";
    }

    if (concessionarias[i].getNome() == dados[0])
    {      
      Automoveis car(dados[5], dados[3], dados[1], stof(dados[2]), stoi(dados[4]));
      concessionarias[i].setAutomoveis(car);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-car";
    }
    
    return "ERRO add-car";

}

//ADICIONA UM NOVO CAMINHAO
string Sistema::add_truck(const string nome)
{
    dados = quebra_string(nome, " ");
    int i = search_concessionaria(dados[0]);

    if (i == -1)
    {
      return "Concessionaria nao encontrada\n";
    }

    if(getConcessionaria().at(i).search_vehicle(dados[3]))
    {
      cout << "ERRO - Veiculo " << dados[3] << " ja adicionado a concessionaria " << dados[0] << endl;
      return " ";
    }

    if (concessionarias[i].getNome() == dados[0])
    {
      Caminhao truck(dados[5], dados[3], dados[1], stof(dados[2]), stoi(dados[4]));
      concessionarias[i].setCaminhao(truck);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-truck";
    }
      
    return "ERRO add-truck";
      
}

//ADICIONA UMA NOVA MOTO
string Sistema::add_moto(const string nome)
{
    dados = quebra_string(nome, " ");
    int i = search_concessionaria(dados[0]);

    if (i == -1)
    {
      return "Concessionaria nao encontrada\n";
    }

    if(getConcessionaria().at(i).search_vehicle(dados[3]))
    {
      cout << "ERRO - Veiculo " << dados[3] << " ja adicionado a concessionaria " << dados[0] << endl;
      return " ";
    }

    if (concessionarias[i].getNome() == dados[0])
    {
      Moto moto(dados[5], dados[3], dados[1], stof(dados[2]), stoi(dados[4]));
      concessionarias[i].setMoto(moto);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-bike";
    }

    return "ERRO add-bike";
}

//PESQUISA O VEICULO
string Sistema::search_vehicle(const string chassi)
{
    for (int i = 0; i < (int) getConcessionaria().size(); i++)
    {
      if(getConcessionaria().at(i).search_vehicle(chassi))
      {
        cout << "CONCESSIONARIA: " << getConcessionaria().at(i).getNome() << endl;
        return " ";
      }
    }
    return "Veiculo nao encontrado\n";
}

//REMOVE O VEICULO 
string Sistema::remove_vehicle(const string chassi)
{
    for (int i = 0; i < (int) getConcessionaria().size(); i++)
    {
      if(getConcessionaria().at(i).search_vehicle(chassi))
      {
        getConcessionaria()[i].remove_vehicle(chassi);
        getConcessionaria()[i].setEstoque(getConcessionaria()[i].getEstoque() - 1);
        return "remove-vehicle\n";
      }
    }
    return "Veiculo nao encontrado\n";
}

//PESQUISA A CONCESSIONARIA
int Sistema::search_concessionaria(const string nome)
{
    for (int i = 0; i < (int)getConcessionaria().size(); i++)
    {
      if (getConcessionaria()[i].getNome() == nome)
      {
        return i;
      }
    }
    return -1;
}

//LISTA FROTA DE CONCESSIONARIA
string Sistema::list_concessionaria(const string nome)
{
    int i = search_concessionaria(nome);
    
    if (i == -1)
    {
      return "Concessionaria nao encontrada";
    }

    double valor_carro = 0, valor_moto = 0, valor_caminhao = 0, valor_total = 0;

    for (int j = 0; j < (int)getConcessionaria()[i].getAutomoveis().size(); j++)
    {
      valor_carro += getConcessionaria()[i].getAutomoveis()[j].getPreco();
    }

    for (int j = 0; j < (int)getConcessionaria()[i].getCaminhao().size(); j++)
    {
      valor_caminhao += getConcessionaria()[i].getCaminhao()[j].getPreco();
    }
    
    for (int j = 0; j < (int)getConcessionaria()[i].getMoto().size(); j++)
    {
      valor_moto += getConcessionaria()[i].getMoto()[j].getPreco();
    }

    valor_total = valor_caminhao + valor_carro + valor_moto;

    cout << endl;
    cout << "Concessionaria " << nome << endl;
    cout << "Total de Automoveis: " << (int)getConcessionaria()[i].getAutomoveis().size() << "; Valor total: R$ " << valor_carro << endl;
    cout << "Total de Motos: " << (int)getConcessionaria()[i].getMoto().size() << "; Valor total: R$ " << valor_moto << endl;
    cout << "Total de Caminhoes: " << (int)getConcessionaria()[i].getCaminhao().size() << "; Valor total: R$ " << valor_caminhao << endl;
    cout << "Valor total da frota: R$ " << valor_total << endl;
    return " ";
}

//FUNCAO QUE ATUALIZA TODOS OS VALORES DE VEICULOS DA CONCESSIONARIA
string Sistema::raise_price(const string nome)
{
    dados = quebra_string(nome, " ");
    int i = search_concessionaria(dados[0]);

    if (i == -1)
    {
      return "Concessionaria nao encontrada para atualizar";
    }
    
    for (int j = 0; j < (int)getConcessionaria()[i].getAutomoveis().size(); j++)
    {
      double aumento = getConcessionaria()[i].getAutomoveis()[j].getPreco() * (stof(dados[1])/100);
      getConcessionaria()[i].getAutomoveis()[j].setPreco(aumento + getConcessionaria()[i].getAutomoveis()[j].getPreco());
      cout << "Aumento de " << dados[1] << "\% nos precos de automoveis da concessionaria " << dados[0] << " realizado" << endl;
    }
    
    for (int j = 0; j < (int)getConcessionaria()[i].getCaminhao().size(); j++)
    {
      double aumento = (getConcessionaria()[i].getCaminhao()[j].getPreco() * (stof(dados[1])/100));
      getConcessionaria()[i].getCaminhao()[j].setPreco(aumento + getConcessionaria()[i].getCaminhao()[j].getPreco());
      cout << "Aumento de " << dados[1] << "\% nos precos de caminhoes da concessionaria " << dados[0] << " realizado" << endl;
    }

    for (int j = 0; j < (int)getConcessionaria()[i].getMoto().size(); j++)
    {
      double aumento = (getConcessionaria()[i].getMoto()[j].getPreco() * (stof(dados[1])/100));
      getConcessionaria()[i].getMoto()[j].setPreco(aumento + getConcessionaria()[i].getMoto()[j].getPreco());
      cout << "Aumento de " << dados[1] << "\% nos precos de motos da concessionaria " << dados[0] << " realizado" << endl;
    }

    return "raise-price \n";

}
