#include "../include/concessionaria.h"

//CONSTRUTOR
//Recebe: dados da concessionaria
//Retorna: mensagem de sucesso ou não
Concessionaria::Concessionaria(string n, string c, int e)
{
    setNome(n);
    setCnpj(c);
    setEstoque(e);
}

//FUNÇÃO DE ACESSO AOS AUTOMOVEIS
//Retorna: vetor de automoveis
vector<Automoveis> &Concessionaria::getAutomoveis()
{
    return v_car;
}

//FUNÇÃO DE EDIÇÃO DE AUTOMOVEIS
//Adiciona um novo automovel ao vetor
void Concessionaria::setAutomoveis(Automoveis automoveis)
{
    v_car.push_back(automoveis);
}   

//FUNÇÃO DE ACESSO AOS CAMINHOES
//Retorna: vetor de caminhoes
vector<Caminhao> &Concessionaria::getCaminhao()
{
    return v_truck;
}

//FUNÇÃO DE EDIÇÃO DE CAMINHOES
//Adiciona um novo caminhão ao vetor
void Concessionaria::setCaminhao(Caminhao caminhao)
{
    v_truck.push_back(caminhao);
} 

//FUNÇÃO DE ACESSO AS MOTOS
//Retorna: vetor de motos
vector<Moto> &Concessionaria::getMoto()
{
    return v_moto;
}

//FUNÇÃO DE EDIÇÃO DE MOTOS
//Adiciona uma nova moto ao vetor
void Concessionaria::setMoto(Moto moto)
{
    v_moto.push_back(moto);
}   

//FUNÇÃO DE ACESSO AO NOME DA CONCESSIONARIA
//Retorna: nome da concessionaria
string Concessionaria::getNome()
{
    return nome;
}

//FUNÇÃO DE EDIÇÃO DO NOME DA CONCESSIONARIA
//Edita o nome da concessionaria
void Concessionaria::setNome(string n)
{
    nome = n;
}

//FUNÇÃO DE ACESSO AO CNPJ DA CONCESSIONARIA
//Retorna: cnpj da concessionaria
string Concessionaria::getCnpj()
{
    return CNPJ;
}

//FUNÇÃO DE EDIÇÃO DE CNPJ DA CONCESSIONARIA
//Edita o cnpj da concessionaria
void Concessionaria::setCnpj(string c)
{
    CNPJ = c;
}

//FUNÇÃO DE ACESSO AO ESTOQUE
//Retorna: quantidade de veiculos no estoque
int Concessionaria::getEstoque()
{
    return estoque;
}

//FUNÇÃO DE EDIÇÃO DE ESTOQUE DA CONCESSIONARIA
//Altera o valor de veiculos no estoque
void Concessionaria::setEstoque(int e)
{
    estoque = e;
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR CARRO
//Recebe: chassi
//Retorna: posição do vetor
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
        return -1;
    }
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR CAMINHÃO
//Recebe: chassi
//Retorna: posição do vetor
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
        return -1;
    }
    
}

//RETORNA UM INDEX REFERENTE AO CHASSI ENVIADO PARA O VETOR MOTO
//Recebe: chassi
//Retorna: posição do vetor
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
        return -1;
    }
    
}

//PESQUISA O VEICULO
//Recebe: chassi do veiculo procurado
//Retorna: verdadeiro se ele existir ou falso se não
bool Concessionaria::search_vehicle(string chassi)
{
    if(indexCar(chassi) != -1)
    {
        getAutomoveis().at(indexCar(chassi)).print_carro();
        return true;
    }

    else if (indexTruck(chassi) != -1)
    {
        getCaminhao().at(indexTruck(chassi)).print_caminhao();
        return true;
    }

    else if (indexMoto(chassi) != -1)
    {
        getMoto().at(indexMoto(chassi)).print_Moto();
        return true;
    }

    return false;
}

//FUNÇÃO SUPORTE PARA REMOVER O VEICULO
//Recebe: chassi do veiculo que será removido
//Retorna: verdadeiro se ele for removido com sucesso ou falso se não
bool Concessionaria::remove_vehicle(string chassi)
{
    if(indexCar(chassi) != -1)
    {
        getAutomoveis().erase(getAutomoveis().begin() + indexCar(chassi));
    }

    else if (indexTruck(chassi) != -1)
    {
        getCaminhao().erase(getCaminhao().begin() + indexTruck(chassi));
    }

    else if (indexMoto(chassi) != -1)
    {
        getMoto().erase(getMoto().begin() + indexMoto(chassi));
    }

    return false;  
}
