#include <iostream>

using namespace std;
#include "funcionario.h"
#include "automovel.h"
#include "custo.h"
#include "visualizacao.h"
int main()
{



    Funcionario f1;
    f1.setNome("Rafael de Santiago");
    f1.setCpf("000.000.000-00");
    f1.setIdade(33);
    f1.setSalario(1000.87);

    Automovel a1;
    a1.setCor("branco");
    a1.setModelo("Montana");
    a1.setPlaca("MJN 7755");
    a1.setManutencao(200.0);
    a1.setTipo(UTILITARIO);

    Custo * objCustos[2];
    objCustos[0] = &a1;
    objCustos[1] = &f1;

    float custos = 0;
    for (int i=0; i<2; i++){
        custos += objCustos[i]->getCusto();
    }
    cout<<"\nCusto mensal: "<<custos;


    Visualizacao * objVisualizaveis[2];
    objVisualizaveis[0] = &a1;
    objVisualizaveis[1] = &f1;
    for (int i=0; i<2; i++){
        objVisualizaveis[i]->imprimirConsole();
    }


    return 0;
}

