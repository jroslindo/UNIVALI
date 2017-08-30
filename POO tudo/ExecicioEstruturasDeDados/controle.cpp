#include "controle.h"

Controle::Controle()
{
    for(unsigned i=0;i<10;i++){
        this->veicFinalPlaca.push_back(list<Veiculo>());
    }
    for(unsigned i=0;i<30;i++){
        this->vagas.push_back(list<Veiculo>());
        this->historicoVagas.push_back(list<Veiculo>());
    }
}

bool Controle::inserirCliente(Cliente &c)
{
    auto it = this->clientes.find(c.getId());
    if (it != this->clientes.end()){
        return false;
    }
    this->clientes[c.getId()] = c;
    return true;
}

bool Controle::inserirVeiculos(string idCliente, Veiculo &v)
{
    //se veiculo ja existir
    auto it = this->veiculos.find(v.getPlaca());
    if (it != this->veiculos.end()){
        return false;
    }
    //se cliente nao existir
    auto itc = this->clientes.find(idCliente);
    if (itc == this->clientes.end()){
        return false;
    }
    this->clientes[idCliente].getVeiculos().push_back(v);
    this->veiculos[v.getPlaca()] = v;
    unsigned finalChar = atoi(&v.getPlaca().back());
    this->veicFinalPlaca[finalChar].push_back(v);
    return true;
}

bool Controle::inserirVeiculoVaga(unsigned vaga, string placa)
{
    //se o veiculo nao existir
    auto it = this->veiculos.find(placa);
    if (it == this->veiculos.end()){
        return false;
    }
    //se o veiculo ja estiver em outra vaga
    auto itV = this->veiculoVaga.find(placa);
    if (itV != this->veiculoVaga.end()){
        auto itAp = this->vagas[itV->second].begin();
        while(itAp != this->vagas[itV->second].end()){
            if(itAp->getPlaca() == placa){
                break;
            }
            itAp++;
        }

        this->vagas[itV->second].erase(itAp);
    }
    //apagar veiculos da vaga
    if ((this->vagas[vaga].size() > 0 &&
            this->vagas[vaga].front().getTipo() == carro)
        ||
        (this->vagas[vaga].size() >= 2 &&
            this->vagas[vaga].front().getTipo() == moto))
    {
        auto it = this->vagas[vaga].begin();
        while(it != this->vagas[vaga].end()){
            veiculoVaga.erase(it->getPlaca());
            it++;
        }
        this->vagas[vaga].clear();
    }

    this->vagas[vaga].push_back(this->veiculos[placa]);
    this->historicoVagas[vaga].push_back(this->veiculos[placa]);
    this->veiculoVaga[placa] = vaga;

    return true;
}

void Controle::listarVeiculosFinal(unsigned final)
{
    cout<<"\n\nVeiculos com placas de final "<<final<<": ";
    auto it = this->veicFinalPlaca[final].begin();
    while(it!= this->veicFinalPlaca[final].end()){
        cout<<"\n - "
           <<it->getPlaca()<<", "
           <<it->getMarca()<<", "
           <<it->getModelo();
        it++;

    }
}

void Controle::listarVeiculosCliente(string idCliente)
{
    //se o cliente não existir
    auto it = this->clientes.find(idCliente);
    if (it == this->clientes.end()){
       cout<<"\n\nCliente não existe" ;
       return;
    }
    cout<<"\n\nLista de Veiculos cliente ["<<idCliente<<"] "<<it->second.getNome();
    auto itV = it->second.getVeiculos().begin();
    while(itV != it->second.getVeiculos().end()){
        cout<<"\n\n - "<<itV->getPlaca()<<", ";
        auto it2 = this->veiculoVaga.find(itV->getPlaca());
        if (it2 == this->veiculoVaga.end()){
            cout<<"Nenhuma vaga";
        }else{
            cout<<"Vaga: "<<it2->second;
        }
        itV++;
    }
}

void Controle::exibirVagaVeiculo(string placa)
{
    //se o veículo não existir
    auto it = this->veiculos.find(placa);
    if (it == this->veiculos.end()){
       cout<<"\n\nVeiculo não existe" ;
       return;
    }

    auto it2 = this->veiculoVaga.find(placa);
    if (it2 == this->veiculoVaga.end()){
       cout<<"\n\nVeiculo "<<placa<<" nao está em qualquer vaga" ;
       return;
    }

    cout<<"\n\nVeiculo está na vaga "<<it2->second;

}

void Controle::listarVeiculosVaga(unsigned vaga)
{
    auto it = this->vagas[vaga].begin();
    cout<<"\n\nVeiculos na vaga "<<vaga<<": ";
    while (it != this->vagas[vaga].end()){
        cout<<"\n - "<<it->getPlaca()<<", "<<it->getMarca()<<", "<<it->getModelo();
        it++;
    }
}

void Controle::listarHistoricoVaga(unsigned vaga)
{
    auto it = this->historicoVagas[vaga].begin();
    cout<<"\n\nHistorico de veiculos na vaga "<<vaga<<": ";
    while (it != this->historicoVagas[vaga].end()){
        cout<<"\n - "<<it->getPlaca()<<", "<<it->getMarca()<<", "<<it->getModelo();
        it++;
    }
}

