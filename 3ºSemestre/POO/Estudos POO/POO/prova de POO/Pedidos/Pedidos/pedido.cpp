#include "pedido.h"


void Pedido::setFaturado(bool value)
{
    faturado = value;
}
Pedido::Pedido(string data, Cliente cli,
               string localEntrega)
{
    this->data = data;
    this->cliente = cli;
    this->localEntrega = localEntrega;
    this->qtdItens = 0;
    this->faturado = false;
}



Cliente Pedido::getCliente() const
{
    return cliente;
}

string Pedido::getLocalEntrega() const
{
    return localEntrega;
}

bool Pedido::getFaturado() const
{
    return faturado;
}

int Pedido::getQtdItens() const
{
    return qtdItens;
}
string Pedido::getData() const
{
    return data;
}

bool Pedido::inserirItem(ItemPedido p){
    if (this->qtdItens == 20){
        return false;
    }
    this->itens[this->qtdItens] = p;
    this->qtdItens++;
    return true;
}

bool Pedido::removerItem(int pos){
    if (this->qtdItens == 0){
        return false;
    }
    if (!(pos >= 0 && pos <= this->qtdItens - 1)){
       return false;
    }
    for (int i=pos; i<this->qtdItens-1;i++){
        itens[i] = itens[i+1];
    }
    this->qtdItens--;
    return true;

}

void Pedido::imprimirPedido(){
    cout<<"\n-----------------------------";
    cout<<"\nCliente: "<<this->cliente.getNome();
    cout<<"\nCPF: "<<this->cliente.getCpf();
    cout<<"\nData do Pedido: "<<this->data;
    cout<<"\nLocal de entrega: "<<this->localEntrega;
    if (this->faturado){
        cout<<"\nFaturado: SIM";
    }else{
        cout<<"\nFaturado: NAO";
    }
    float total = 0.0;
    for(int i=0; i< this->qtdItens;i++){
        float preco = itens[i].getPrecoUnit()
                *itens[i].getQtd();
        total+= preco;
        cout<<"\n[";
        cout<<i<<"\t"<<itens[i].getDesc()
            <<"\t"<<itens[i].getQtd()
            <<"\t"<<itens[i].getPrecoUnit()
            <<"\t"<<preco
            <<"\t("<<itens[i].getUn()<<")";
        cout<<"]";
    }
    cout<<"\nTOTAL: "<<total;
    cout<<"\n-----------------------------";
}
