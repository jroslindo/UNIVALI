#include <iostream>

using namespace std;

#include "personagem.h"

int main()
{
    /*Personagem p1;
    p1.setNome("HeMan");
    p1.setNivel(30);
    p1.adicionarItem(Item("Espada", 100));
    p1.adicionarItem(Item("Pacato", 1000));
    p1.adicionarItem(Item("Gel pra cabelo", 1));
    p1.setCabeca(Item("Elmo",1));
    p1.setMaoDir(Item("EspadaCinza",1000));
    p1.setMaoEsq(Item("Escudo",100));
    p1.setArmadura(Item("Couro",100));
    p1.salvar();*/

    Personagem p2;
    p2.carregar("HeMan");
    cout<<"\nNome: "<<p2.getNome();
    cout<<"\nNivel: "<<p2.getNivel();
    Item x = p2.getCabeca();
    cout<<"\nCabeca: "<<x.getDescricao()<<"("<<x.getPoder()<<")";
    x = p2.getMaoEsq();
    cout<<"\nMaoEsq: "<<x.getDescricao()<<"("<<x.getPoder()<<")";
    x = p2.getMaoDir();
    cout<<"\nMaoDir: "<<x.getDescricao()<<"("<<x.getPoder()<<")";
    x = p2.getArmadura();
    cout<<"\nArmadura: "<<x.getDescricao()<<"("<<x.getPoder()<<")";
    cout<<"\nMochila:";
    for (int i=0; i<p2.qtdItens(); i++){
        cout<<"\n - "<<p2.getItem(i).getDescricao()
           <<"("<<p2.getItem(i).getPoder()<<")";
    }
    cout<<"\n";

    return 0;
}

