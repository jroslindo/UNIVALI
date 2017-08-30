#include <iostream>

using namespace std;
#include "funcionario.h"
#include "automovel.h"
#include "custo.h"
#include "visualizacao.h"

int main()
{

    Funcionario f1;
    f1.setCpf("105.089.959-81");
    f1.setNome("Gustavo Copini Decol");
    f1.setIdade(19);
    f1.setSalario(12000);

    Automovel a1;
    a1.setCor("Vermelho");
    a1.setManutencao(21500);
    a1.setModelo("Impala");
    a1.setPlaca("KYV2501");
    a1.setTipo(UTILITARIO);

    Custo * objCustos[2];
    objCustos[0] = &a1;
    objCustos[1] = &f1;

    float custos=0;
    for(int i=0;i<2;i++){
        custos += objCustos[i]->getCusto();
    }

    Visualizacao * objVisualizar[2];
    objVisualizar[0] = &a1;
    objVisualizar[1] = &f1;

    for(int i=0;i<2;i++){
        objVisualizar[i]->imprimirConsole();
    }

    cout<<"\n\nCusto: "<<custos;

}
