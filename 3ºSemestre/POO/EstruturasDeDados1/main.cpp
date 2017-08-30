#include <iostream>

using namespace std;
#include <list>
#include <vector>
#include <set>
#include "pessoa.h"

int main()
{

    ///////////////////////
    /////TESTE COM SET///// CONJUNTOS MATEMÁTICA-----ARVORE :(
    ///////////////////////

    set<Pessoa> spessoas;

    Pessoa e;
    e.setCpf("111.111.111-11");
    e.setNome("Rafael");

    Pessoa f;
    f.setCpf("444.444.444-44");
    f.setNome("Eduardo");

    ///Inserir na arvore
    spessoas.insert(e);
    spessoas.insert(f);

    ///Pesquisa na arvore com FIND
    Pessoa busca;
    busca.setCpf("111.111.111-11");
    set<Pessoa>::iterator it;
    it = spessoas.find(busca);
    if(it!=spessoas.end()){
        cout<<"\nEncontrou: "<<it->getNome();
    }else{
        cout<<"Falha na busca, nada foi encontrado!";
    }

    ///Remover da arvore
    spessoas.erase(busca);

    /*
    for(Pessoa p: spessoas){
        cout<<"\n"<<p.getNome();
    }
    */

    return 0;

    /// VECTOR E LIST TEM ACESSO DIRETO
    /// - VECTOR TEM A PESQUISA MAIS RÁPIDA, PORÉM, MAIS RESTRITO.

    //////////////////////
    ///TESTE COM VECTOR///
    //////////////////////

    vector<Pessoa> vpessoas;

    Pessoa x;
    x.setNome("Marcos");
    x.setCpf("555.555.555-55");

    Pessoa y;
    y.setNome("Cleiton");
    y.setCpf("999.999.999-99");

    ///Inserindo no Vector

    vpessoas.push_back(x);
    vpessoas.push_back(y);

    ///Imprimindo
    for(int i = 0; i < vpessoas.size(); i++){
        cout<<"\n"<<vpessoas[i].getNome();
    }

    //////////////////////////////////////////////////////
    return 0;/////////////////////////////////////////////
    //////////////////////////////////////////////////////

    ////////////////////
    ///TESTE COM LIST/// DUPLAMENTE ENCADEADA
    ////////////////////

    list<Pessoa> pessoas;

    Pessoa a;
    a.setNome("Gustavo");
    a.setCpf("105.089.959-81");

    Pessoa b;
    b.setNome("Joao");
    b.setCpf("000.000.000-00");

    ///Criando iterador
    //list<Pessoa>::iterator it;

    ///Iterador recebe o inicio da lista
    //it = pessoas.begin();

    /*
    ///Inserindo na lista
    pessoas.insert(it, a);
    pessoas.insert(it, b);
    */

    ///Inserindo Inicio
    pessoas.push_front(a);
    pessoas.push_front(b);

    /*
    ///Imprimir, percorrer a lista até o fim
    it = pessoas.begin();
    while(it!=pessoas.end()){
        cout<<"\n"<<it->getNome();
        it++;
    }
    */

    ///Removendo da Lista
    pessoas.pop_front();

    ///Outra forma de imprimir, mas só funciona com as estruturas padrões, "FOR IT".
    for(Pessoa x: pessoas){
        cout<<"\n"<<x.getNome();
    }

    return 0;

}
