#include "../include/concessionaria.h"

//CONSTRUTOR
Concessionaria::Concessionaria(string n, string c, int e)
{
    setNome(n);
    setCnpj(c);
    setEstoque(e);
}

//RETORNA O VETOR DE AUTOMOVEIS
vector<Automoveis> &Concessionaria::getAutomoveis()
{
    return v_car;
}

//ADICIONA AO VETOR DE AUTOMOVEIS
void Concessionaria::setAutomoveis(Automoveis automoveis)
{
    v_car.push_back(automoveis);
}   

//RETORNA O VETOR DE CAMINHÕES
vector<Caminhao> &Concessionaria::getCaminhao()
{
    return v_truck;
}

//ADICIONA AO VETOR DE CAMINHÕES
void Concessionaria::setCaminhao(Caminhao caminhao)
{
    v_truck.push_back(caminhao);
} 

//RETORNA O VETOR DE MOTOS
vector<Moto> &Concessionaria::getMoto()
{
    return v_moto;
}

//ADICIONA AO VETOR DE MOTOS
void Concessionaria::setMoto(Moto moto)
{
    v_moto.push_back(moto);
}   

//RETORNA O NOME DA CONCESSIONARIA
string Concessionaria::getNome()
{
    return nome;
}

//EDITA O NOME DA CONCESSIONARIA
void Concessionaria::setNome(string n)
{
    nome = n;
}

//RETORNA O CNPJ DA CONCESSIONARIA
string Concessionaria::getCnpj()
{
    return CNPJ;
}

//EDITA O CNPJ DA CONCESSIONARIA
void Concessionaria::setCnpj(string c)
{
    CNPJ = c;
}

//RETORNA O ESTOQUE DA CONCESSIONARIA
int Concessionaria::getEstoque()
{
    return estoque;
}

//ACRESCENTA AO ESTOQUE DA CONCESSIONARIA
void Concessionaria::setEstoque(int e)
{
    estoque = e;
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR CARRO
int Concessionaria::indexCar(string chassi)
{
    auto it = find_if(getAutomoveis().begin(), getAutomoveis().end(), [&chassi] (Automoveis &car) {return car.getChassi() == chassi;});

    if (it != getAutomoveis().end())
    {
        auto index = distance(getAutomoveis().begin(), it);
        return index;
    }

    else
    {
        return 1;
    }
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR CAMINHÃO
int Concessionaria::indexTruck(string chassi)
{
    auto it = find_if(getCaminhao().begin(), getCaminhao().end(), [&chassi] (Caminhao &truck) {return truck.getChassi() == chassi;});

    if (it != getCaminhao().end())
    {
        auto index = distance(getCaminhao().begin(), it);
        return index;
    }

    else
    {
        return 1;
    }
    
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR MOTO
int Concessionaria::indexMoto(string chassi)
{
    auto it = find_if(getMoto().begin(), getMoto().end(), [&chassi] (Moto &moto) {return moto.getChassi() == chassi;});

    if (it != getMoto().end())
    {
        auto index = distance(getMoto().begin(), it);
        return index;
    }

    else
    {
        return 1;
    }
    
}

//PESQUISA O VEICULO
bool Concessionaria::search_vehicle(string chassi)
{
    if(indexCar(chassi) != 1)
    {
        getAutomoveis().at(indexCar(chassi)).print_carro();
        return true;
    }

    else if (indexTruck(chassi) != 1)
    {
        getCaminhao().at(indexTruck(chassi)).print_caminhao();
        return true;
    }

    else if (indexMoto(chassi) != 1)
    {
        getMoto().at(indexMoto(chassi)).print_Moto();
        return true;
    }

    return false;
}

//FUNÇÃO SUPORTE PARA REMOVER O VEICULO
bool Concessionaria::remove_vehicle(string chassi)
{
    if(indexCar(chassi) != 1)
    {
        getAutomoveis().erase(getAutomoveis().begin() + indexCar(chassi));
    }

    else if (indexTruck(chassi) != 1)
    {
        getCaminhao().erase(getCaminhao().begin() + indexTruck(chassi));
    }

    else if (indexMoto(chassi) != 1)
    {
        getMoto().erase(getMoto().begin() + indexMoto(chassi));
    }

    return false;  
}
