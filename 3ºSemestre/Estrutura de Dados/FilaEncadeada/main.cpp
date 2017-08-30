#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include "TADFilaEncadeada.h"
#include "torcedor.h"

int main()
{
    int qtGuicheNormal, qtGuicheSocio, qtPessoasInicial,qtPessoasTempo,tempo,i,menorFilaNormal,menorFilaSocio;

    /// OBTENÇÃO DE DADOS DO USUARIO ///

    cout << "Quantidade de guiche normal: "<<endl;
    cin  >> qtGuicheNormal;
    TFila <Torcedor> guiche_normal[qtGuicheNormal];
    cout << "Quantidade de guiche socio: "<<endl;
    cin  >> qtGuicheSocio;
    TFila <Torcedor> guiche_socio[qtGuicheSocio];
    cout << "Quantidade inicial de pessoas: "<<endl;
    cin  >> qtPessoasInicial;
    cout << "Quantidade de pessoas por tempo: "<<endl;
    cin  >> qtPessoasTempo;
    cout << "Tempo de Simulacao: "<<endl;
    cin  >> tempo;

    /// INICIALIZAÇÃO DAS FILAS/GUICHÊS ///

    for(i=0;i<qtGuicheNormal;i++){
        inicializar(guiche_normal[i]);
    }

    for(i=0;i<qtGuicheSocio;i++){
        inicializar(guiche_socio[i]);
    }

    /// VERIFICA MENOR FILA ENTRE OS GUICHES NORMAIS ///

    for(i=0;i<qtGuicheNormal;i++){
        if(guiche_normal[i].quantidade<=guiche_normal[i+1].quantidade){
            menorFilaNormal=i;
        }
    }

    /// VERIFICA MENOR FILA ENTRE OS GUICHES SOCIOS ///

    for(i=0;i<qtGuicheSocio;i++){
        if(guiche_socio[i].quantidade<=guiche_socio[i+1].quantidade){
            menorFilaSocio=i;
        }
    }


printGuiches(qtGuicheNormal,qtGuicheSocio);


}
