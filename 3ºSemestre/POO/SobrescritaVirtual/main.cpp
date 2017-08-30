#include <iostream>

using namespace std;
#include "funcionario.h"

int main()
{

    Pessoa *pessoas[5];

    pessoas[0] = new Pessoa("100.000.000-00");
    pessoas[0]->setNome("Joao Paulo");
    pessoas[0]->setSobrenome("Roslindo");
    //pessoas[0]->imprimir();

    pessoas[1] = new Pessoa("200.000.000-00");
    pessoas[1]->setNome("Gustavo");
    pessoas[1]->setSobrenome("Copini Decol");

    pessoas[2] = new Funcionario("300.000.000-00",12000);
    pessoas[2]->setNome("Matheus");
    pessoas[2]->setSobrenome("nasehuiamz");

    pessoas[3] = new Funcionario("400.000.000-00",13000);
    pessoas[3]->setNome("Marcos");
    pessoas[3]->setSobrenome("Polo");

    pessoas[4] = new Funcionario("500.000.000-00",14000);
    pessoas[4]->setNome("Adolpho");
    pessoas[4]->setSobrenome("Hitler");

    for(int i=0;i<5;i++){
        pessoas[i]->imprimir();
    }

    /*Pessoa a;
    a.setCpf("105.089.959-81");
    a.setNome("Gustavo");
    a.setSobrenome("Copini Decol");
    a.imprimir();

    Funcionario b;
    b.setNome("Joao Paulo");
    b.setSobrenome("Roslindo");
    b.setCpf("000.000.000-00");
    b.setSalario(20000);
    b.imprimir();
    */
    return 0;

}
