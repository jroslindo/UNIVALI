#include <iostream>

using namespace std;

#include "pessoa.h"
#include <list>
#include <vector>
#include <set>

int main()
{
    Pessoa p1, p2, p3;

    p1.setCpf("000");
    p1.setNome("Rafael de Santiago");

    p2.setCpf("111");
    p2.setNome("Ruy de Oliveira Neis");

    p3.setCpf("222");
    p3.setNome("Antônio Carlos Silva Junior");


    set<Pessoa> pessoas;
    pessoas.insert(p1);
    pessoas.insert(p2);
    pessoas.insert(p3);
    //pertence ou não
    if (pessoas.find(Pessoa("999")) != pessoas.end()){
        cout<<"Existe!!!\n";
    }else{
        cout<<"Não existe!!!\n";
    }

    //utilizar o dado
    set<Pessoa>::iterator it1 = pessoas.find(Pessoa("111"));
    if(it1 != pessoas.end()){
        cout<<"\nNome: "<<it1->getNome()<<"\n";
    }




    /*vector<Pessoa> pessoas;
    pessoas.push_back(p1);
    pessoas.push_back(p2);
    pessoas.push_back(p3);

    cout<<"Nome da pessoa: "<<pessoas[1].getNome();
    cout<<"\n";


    /*list<Pessoa> pessoas;

    list<Pessoa>::iterator it;

    //it++;
    pessoas.push_front(p1);
    pessoas.push_front(p2);

    it = pessoas.begin();
    it++;
    pessoas.insert(it,p3);


    cout<<"\nAntes de remover";
    it = pessoas.begin();
    while(it!=pessoas.end()){
        cout<<"\n"<<it->getNome();
        it++;
    }


    it = pessoas.begin();
    while(it!=pessoas.end()){
        if (it->getCpf() == "111"){
            pessoas.erase(it);
            break;
        }
        it++;
    }


    cout<<"\nDepois de remover";
    for(Pessoa p: pessoas){
           cout<<"\n"<<p.getNome();
    }

*/


    return 0;
}

