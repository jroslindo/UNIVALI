#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#include "especifico.h"
#include "TADFila.h"


int main()
{

    int x=1;// USADO PARA MANTER A EXECUÇÃO DO WHILE

    while (x==1){ // LOOPING DE EXECUÇÃO


            int num;
            cout << "\t\t\tMENU" << endl << endl; // PRINTS MENU
            cout << "1 - Creditos" << endl;
            cout << "2 - Instrucoes" << endl;
            cout << "3 - Simulacao" << endl;
            cout << "4 - Sair" << endl << endl;
            cout << "Digite uma opcao: ";
            cin >> num; //NUM RECEBE VALOR DO USUARIO E DIGITAR
    if (num == 1){  // "CASES" PARA CADA AÇÃO
            system ("cls"); // LIMPA TELA
            cout << "\t\t\tCREDITOS" << endl<< endl; // CREDITOS
            cout << "UNIVALI - Universidade Do Vale Do Itajai" << endl;
            cout << "Professor - Rafael Ballotin" << endl;
            cout << "Disciplina - Estrutura de Dados" << endl;
            cout << "Alunos - Gustavo Copini Decol, João Paulo Roslindo" << endl;
            system ("pause"); //PAUSE NO PROGRAMA
            system ("cls");
    }

    if (num == 2){ // INSTRUCOES
        system ("cls");
        cout << "\t\t\tINSTRUCOES" << endl << endl;
        cout << "Este e um programa de simulação de filas, para usa-lo voce precisa inserir" << endl;
        cout << "um numero de caixas normais, especiais, numero de pessoas na carga inicial" << endl;
        cout << "e quantas pessoas sao esperadas por unidade de tempo" << endl;
        system ("pause");
        system ("cls");
    }

    if (num == 4){ // SAIR DO LOOPING
        x=0;
    }

    if (num==3){  //A FILA
    int nguichesN, nguichesS,qttCargaInicial, qttPessoasPorTempo, maxUnidadesTempo,i=0; // VARIAVEIS DE NUMEROS RECEBIDOS PELO USUARIO E UMA CONSTANTE

    cout << "Quantidade de guiches normais: "; //pegando os valores de entrada
    cin  >> nguichesN;
    cout << "Quantidade de guiches socio: ";
    cin  >> nguichesS;
    cout << "Quantidade de pessoas esperando no portao (carga inicial): ";
    cin  >> qttCargaInicial;
    cout << "Quantidade de pessoas que chegam por vez: ";
    cin  >> qttPessoasPorTempo;
    cout << "Unidades de tempo: ";
    cin  >> maxUnidadesTempo;


    TFila <Ttorcedor> guiches_normais[nguichesN]; //CRIANDO FILAS NA QUANTIDADE DE CADA GUICHE E INICIALIZANDO ELAS
    for (i=0; i<nguichesN; i++){
        inicializar(guiches_normais[i]);
    }

    TFila <Ttorcedor> guiches_socio[nguichesS]; // MESMO PROCESSO PARA OS SOCIOS
    for (i=0; i<nguichesN; i++){
        inicializar(guiches_socio[i]);
    }


    ///VARIAVEIS SECUNDARIAS

    int n=0,j=0, retorno, menorfilaN,menorfilaS, codigoTorcedor=0, totalguiches=nguichesN+nguichesS ;  ///VARIAVEIS
    float media=0, qttSocio=0, qttTorcedor=0, somaSocio=nguichesS, somaTorcedor=nguichesN;
    Ttorcedor  Ttorcedor[qttCargaInicial + qttPessoasPorTempo* maxUnidadesTempo],aux;
    int  Ntotal_torcedores = qttCargaInicial + (maxUnidadesTempo* qttPessoasPorTempo);
    int Nsocios = Ntotal_torcedores*0.05, Nnormal= Ntotal_torcedores*0.95;
    int pessoasEsperando[totalguiches];
    media = Ntotal_torcedores;
    /// ZERANDO O VETOR
    for(i=0; i<totalguiches;i++)
        pessoasEsperando[i]=0;

    ///DEFININDO PARA CADA TORCEDOR
    for (i=0; i < Ntotal_torcedores; i++){
            Ttorcedor[i].codigoTorcedor = codigoTorcedor; // RECEBENDO UM VALOR DO CONTADOR PARA INDENTIFICAR O TORCEDOR
            codigoTorcedor++;
            Ttorcedor[i].tipo = tipoTorcedor(Ntotal_torcedores,i); /// CHAMA FUNÇÃO QUE DIVIDE EM GRUPOS
            //1-socio 0-normal

            if(Ttorcedor[i].tipo == 0){ // SE FOR NORMAL
                Ttorcedor[i].contadorUnidadeTempo=unidadeNormal(Nnormal, i-Nsocios); //FUNCAO QUE RETORNA UNIDADE DE TEMPO

            }
            if(Ttorcedor[i].tipo == 1){ //SE FOR SOCIO
                Ttorcedor[i].contadorUnidadeTempo=unidadeSocio(Nsocios, i); // FUNCAO QUE RETORNA UNIDADE DE TEMPO
            }
    }

    /// EMBARALHANDO
        int posicao;
    for(j=0; j<100*Ntotal_torcedores; j++){ // EMBARALHAR 100 VEZES O VALOR DE TORCEDORES, PARA TER UM BOM EMBARALHAMENTO
        for(i=0;i<Ntotal_torcedores;i++){

            posicao=rand()%Ntotal_torcedores;   //GERA UM RAND PARA TROCAR O VET EM I PELO RANDOM
            aux=Ttorcedor[i];
            Ttorcedor[i]=Ttorcedor[posicao];
            Ttorcedor[posicao]=aux;
        }
    }

    for (j=0; j<qttCargaInicial; j++){ //criando a carga inicial

        if (Ttorcedor[j].tipo == 0){
            menorfilaN=guiches_normais[0].quantidade;

            for(i=0;i<nguichesN;i++){
                if(guiches_normais[i].quantidade < menorfilaN){
                    menorfilaN= guiches_normais[i].quantidade; // PROCURA MENOR FILA
                }

                if (guiches_normais[i].quantidade == menorfilaN){ //RETORNA A FILA
                    retorno=i;
                }
            }

            if (Ttorcedor[j].tipo == 0){
                queued(guiches_normais[retorno],Ttorcedor[j]); //INSERE NA FILA
                pessoasEsperando[retorno]++;
            }
        }
        /////////////////////////////////////////////////////////////////

        else{
            menorfilaS=guiches_socio[0].quantidade;

            for(i=0;i<nguichesS;i++){
                if(guiches_socio[i].quantidade < menorfilaS){
                    menorfilaS= guiches_socio[i].quantidade; // PROCURA MENOR FILA
                }

                if (guiches_socio[i].quantidade == menorfilaS){ //RETORNA A FILA
                    retorno=i;
                }
            }

            if (Ttorcedor[j].tipo == 1){
                queued(guiches_socio[retorno],Ttorcedor[j]); //INSERE NA FILA
                pessoasEsperando[retorno]++;
            }

        }



    }

    /// COUTS PARA IMPRIMIR A FILA
    cout << "\n";
    cout << "--------------Fila Normal---------------" << endl;
    for(i=0; i<nguichesN; i++){
        imprimir(guiches_normais[i], i);
        cout << endl;
    }

    cout << "\n\n--------------Fila Socio----------------"<< endl;
    for(i=0; i<nguichesS; i++){
        imprimir(guiches_socio[i], i);
        cout << endl;
    }

    cout << "\n\n----------------------------------------\n\n";
    system("pause");
    system("cls");

        /// COMEÇO DA FILA /////////////////////////////////////////////////////////////////////////////////////////////
    while (n<maxUnidadesTempo){

        /// DISTRIBUI NA FILA
        for (j=0; j<qttPessoasPorTempo; j++){ //criando a carga inicial

            if (Ttorcedor[n*qttPessoasPorTempo+j+qttCargaInicial].tipo == 0){
                menorfilaN=guiches_normais[0].quantidade; //RECEBE A QUANTIDADE DA 0

                for(i=0;i<nguichesN;i++){
                    if(guiches_normais[i].quantidade < menorfilaN){  // PROCURA A MENOR FILA
                        menorfilaN= guiches_normais[i].quantidade; // PROCURA MENOR FILA
                    }

                    if (guiches_normais[i].quantidade == menorfilaN){ //RETORNA A FILA MENOR
                        retorno=i;
                    }
                }

                if (Ttorcedor[n*qttPessoasPorTempo+j+qttCargaInicial].tipo == 0){ //INSERE NA FILA
                    queued(guiches_normais[retorno],Ttorcedor[n*qttPessoasPorTempo+j+qttCargaInicial]); //INSERE NA FILA
                    pessoasEsperando[retorno]++;
                }
            }else{
                menorfilaS=guiches_socio[0].quantidade; /// SE FOR SOCIO VAI FAZER O MESMO PROCESSO PARA O SOCIO

                for(i=0;i<nguichesS;i++){
                    if(guiches_socio[i].quantidade < menorfilaS){
                        menorfilaS= guiches_socio[i].quantidade; // PROCURA MENOR FILA
                    }

                    if (guiches_socio[i].quantidade == menorfilaS){ //RETORNA A FILA
                        retorno=i;
                    }
                }

                if (Ttorcedor[n*qttPessoasPorTempo+j+qttCargaInicial].tipo == 1){
                    queued(guiches_socio[retorno],Ttorcedor[n*qttPessoasPorTempo+j+qttCargaInicial]); //INSERE NA FILA
                    pessoasEsperando[retorno]++;
                }
            }
        }
      cout << "\n----------------------------------------\n";
      cout << "\nSairam da Fila:"<< endl;

    ///SENDO ATENDIDO
    for(i=0; i<nguichesN;i++){
        if(guiches_normais[i].quantidade > 0){
        if(guiches_normais[i].inicio->dado.contadorUnidadeTempo >1){  //FUNÇÃO PARA RETIRAR DA FILA, SE N ESTIVER PRONTO PARA SAIR DA FILA, ELE DIMINUI A UNIDADE DE TEMPO
            guiches_normais[i].inicio->dado.contadorUnidadeTempo--;
        }
        else{ //DAR O COUT  DE QUEM SAIU DA FILA
            cout << "Fila Normal numero " << i+1 << " torcedor numero " << unqueued(guiches_normais[i]).codigoTorcedor << endl; // CASO ESTEJA PRONTO, SAI DA FILA
            qttTorcedor++; // SOMA DE PESSOAS QUE SAIRAM DA FILA NORMAL
            media--;
        }
        }
    }

    for(i=0; i<nguichesS;i++){
        if(guiches_socio[i].quantidade > 0){  // MESMO PROCESSO ANTERIOR SO QUE PARA SOCIOS
        if (guiches_socio[i].inicio->dado.contadorUnidadeTempo >1){
            guiches_socio[i].inicio->dado.contadorUnidadeTempo --;
        }else{
            cout << "Fila Socio numero " << i+1 << " torcedor numero " << unqueued(guiches_socio[i]).codigoTorcedor << endl;
            qttSocio++;// SOMA DE PESSOAS QUE SAIRAM DA FILA SOCIO
            media--;
        }
    }
}

    ///COUTS DA FILA
        cout << "\n";  //
        cout << "--------------Fila Normal---------------" << endl;
        for(i=0; i<nguichesN; i++){
            imprimir(guiches_normais[i], i);
            cout << endl;
        }

        cout << "\n\n--------------Fila Socio----------------"<< endl;
        for(i=0; i<nguichesS; i++){
            imprimir(guiches_socio[i], i);
            cout << endl;
        }

        cout << "\n\n----------------------------------------\n\n";

        system("pause"); //ESPERA
        system("cls"); // LIMPA TELA
        n++; // CONTADOR DE UNIDADE TEMPO
}///  /////////////////////////////////////////////////////////////////////// fim do while
///PRINT DO FINAL DA FILA E MEDIAS
    cout << "\n\n\n";
    cout << "--------------Fila Normal---------------" << endl;
    for(i=0; i<nguichesN; i++){
        imprimir(guiches_normais[i], i);
        cout << endl;
    }

    cout << "\n\n--------------Fila Socio----------------"<< endl;
    for(i=0; i<nguichesS; i++){
        imprimir(guiches_socio[i], i);
        cout << endl;
    }

    cout << "\n\n----------------------------------------\n\n";
  /*  for(i=0; i<totalguiches; i++)
        media += pessoasEsperando[i];
    media/=totalguiches;*/
    media/=totalguiches;
    cout << "Pessoas sobrando por fila: "  << media << endl;
    cout << "\n\n----------------------------------------\n\n";
    system ("pause");
    system("cls");
    }

}

}
