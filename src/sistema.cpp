#include "../include/sistema.h"

//CHAMA A FUNÇÃO QUE ENCERRA O PROGRAMA
string Sistema::quit() 
{
    return "Saindo...";
}

//CHAMA A FUNÇÃO QUE CRIA A CONCESSIONARIA
//Recebe: dados da nova concessionaria
//Retorna: mensagem se a operação foi bem sucedida ou não
string Sistema::create_concessionaria (const string nome) 
{
    dados = quebra_string(nome, " ");

    int i = search_concessionaria(dados[0]);
    if (i == -1)
    {
      Concessionaria n_con(dados[0], dados[1], stoi(dados[2]));
      setConcessionaria(n_con);
    }

    else
    {
      return "concessionaria ja adicionada";
    }
    
    return "create_concessionaria";
}

//FUNÇÃO DE ACESSO AS CONCESSIONARIAS
//Retorna: o vetor de concessionaria
vector<Concessionaria> &Sistema::getConcessionaria()
{
    return concessionarias;
}

//ADICIONA AO VETOR DE CONCESSIONARIA
//Recebe: novo obj. do tipo concessionaria
void Sistema::setConcessionaria(Concessionaria concessionaria)
{
    concessionarias.push_back(concessionaria);
}

//QUEBRA A STRING ADD CADA PARTE EM UMA POSIÇÃO DO VETOR
//Recebe: string que deverá se quebrada e operador para quebra
//Retorna: um vetor com todos os dados da string
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
//Apresenta na tela todas as concessionarias
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
//Recebe os dados do novo carro
//Retorna: mensagem se a operação foi bem sucedida ou não
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
      Automoveis car(dados[5], dados[2], dados[1], stof(dados[3]), stoi(dados[4]));
      concessionarias[i].setAutomoveis(car);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-car";
    }
    
    return "ERRO add-car";

}

//ADICIONA UM NOVO CAMINHAO
//Recebe os dados do novo caminhão
//Retorna: mensagem se a operação foi bem sucedida ou não
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
      Caminhao truck(dados[5], dados[2], dados[1], stof(dados[3]), stoi(dados[4]));
      concessionarias[i].setCaminhao(truck);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-truck";
    }
      
    return "ERRO add-truck";
      
}

//ADICIONA UMA NOVA MOTO
//Recebe: os dados da nova moto
//Retorna: mensagem se a operação foi bem sucedida ou não
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
      Moto moto(dados[5], dados[2], dados[1], stof(dados[3]), stoi(dados[4]));
      concessionarias[i].setMoto(moto);
      concessionarias[i].setEstoque(concessionarias[i].getEstoque() + 1);
      return "add-bike";
    }

    return "ERRO add-bike";
}

//PESQUISA O VEICULO
//Recebe: o num. de chassi do veiculo que está sendo procurado
//Retorna: dados do veiculo se encontrado
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
//Recebe: o num. de chassi do veiculo que será removido
//Retorna: mensagem se a operação foi bem sucedida ou não
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
//Recebe: o nome da concessionaria
//Retorna: indice que a concessionaria se encontra no vetor
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
//Recebe: nome da concessionaria que irá listar
//Retorna: mensagem se a operação foi bem sucedida ou não
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
//Recebe: nome da concessionaria e porcentagem que irá aumentar
//Retorna: mensagem se a operação foi bem sucedida ou não
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

//CRIA O ARQUIVO .TXT DA CONCESSIONARIA SOLICITADA
//Recebe: nome do arquivo que será criado
//Retorna: mensagem se a operação foi bem sucedida ou não
string Sistema::save_concessionaria(const string nome)
{
    dados = quebra_string(nome, ".");
    int i = search_concessionaria(dados[0]);

    if (i == -1)
    {
      return "concessionaria nao encontrada";
    }

    fstream file(nome, ios::out);

    file << "cons:" << getConcessionaria()[i].getNome() << " " << getConcessionaria()[i].getCnpj() << " " << getConcessionaria()[i].getEstoque() << "\n";

    for (int j = 0; j < (int)getConcessionaria()[i].getAutomoveis().size(); j++)
    {
      //IMD-SE jipe 400000 3BRBJTWPCM2563458 2018 comum
      file << "car:" << getConcessionaria()[i].getNome() << " " << getConcessionaria()[i].getAutomoveis()[j].getMarca() << " " << getConcessionaria()[i].getAutomoveis()[j].getPreco()  << " " << getConcessionaria()[i].getAutomoveis()[j].getChassi() << " " << getConcessionaria()[i].getAutomoveis()[j].getAno_Fabricacao()  << " "<< getConcessionaria()[i].getAutomoveis()[j].getTipo_motor() << "\n";
    }

    for (int j = 0; j < (int)getConcessionaria()[i].getCaminhao().size(); j++)
    {
      file << "truck:" << getConcessionaria()[i].getNome() <<  " " << getConcessionaria()[i].getCaminhao()[j].getMarca() << " " << getConcessionaria()[i].getCaminhao()[j].getPreco() << " " << getConcessionaria()[i].getCaminhao()[j].getChassi()<< " " << getConcessionaria()[i].getCaminhao()[j].getAno_Fabricacao() << " " << getConcessionaria()[i].getCaminhao()[j].getTipo_Carga() << "\n";
    }

    for (int j = 0; j < (int)getConcessionaria()[i].getMoto().size(); j++)
    {
      file << "bike:" << getConcessionaria()[i].getNome() << " " << getConcessionaria()[i].getMoto()[j].getMarca() << " " << getConcessionaria()[i].getMoto()[j].getPreco() << " " << getConcessionaria()[i].getMoto()[j].getChassi() << " " << getConcessionaria()[i].getMoto()[j].getAno_Fabricacao() << " " << getConcessionaria()[i].getMoto()[j].getModelo() << "\n";
    }
    
    return "save-concessionaria";
}

//FUNÇÃO QUE RECUPERA DADOS DO ARQUIVO 
//Recebe: nome do arquivo txt
//Retorna: mensagem se a operação foi bem sucedida ou não
string Sistema::load_concessionaria(const string nome)
{
    string linha;

    ifstream concessionaria;
    concessionaria.open(nome);

    if(concessionaria.is_open())
    {      
      while (getline(concessionaria, linha))
      {
        dados = quebra_string(linha, ":");

        if (dados[0] == "car")
        {
          add_car(dados[1]);
        }

        else if (dados[0] == "truck")
        {
          add_truck(dados[1]);
        }

        else if (dados[0] == "bike")
        {
          add_moto(dados[1]);
        }

        else if(dados[0] == "conc")
        {
          create_concessionaria(dados[1]);
        }
        
      } 

    }
    return "load-concessionaria";
}
