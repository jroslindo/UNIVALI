#include <iostream>

using namespace std;

#include "funcionario.h"

int main()
{
    Pessoa * pessoas[5];

    pessoas[0] = new Pessoa("000.000.000-00");
    pessoas[0]->setNome("Joaquim");
    pessoas[0]->setSobrenome("Xavier");
    //pessoas[0]->imprimir();

    pessoas[1] = new Pessoa("111.111.111-00");
    pessoas[1]->setNome("Luca");
    pessoas[1]->setSobrenome("Brasi");

    pessoas[2] = new Funcionario("423.213.234-49", 12358.77);
    pessoas[2]->setNome("Michael");
    pessoas[2]->setSobrenome("Corleone");

    pessoas[3] = new Funcionario("666.666.666-66", 22300.77);
    pessoas[3]->setNome("Michael");
    pessoas[3]->setSobrenome("Corleone");

    pessoas[4] = new Funcionario("999.999.999-99", 2450.66);
    pessoas[4]->setNome("John");
    pessoas[4]->setSobrenome("White");

    for(int i=0; i<5; i++){
        pessoas[i]->imprimir();
    }
    return 0;
}

