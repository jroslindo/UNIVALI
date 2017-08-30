/*
UNIVERSIDADE DO VALE DO ITAJAI - UNIVALI
Professor: Rafael de Santiago
Disciplina: Programacao Orientada a Objeto
Engenharia de Computacao - 3 periodo
Aluno: Joao Paulo Roslindo - Gustavo Copini Decol
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "jogo.h"


int main()
{
    int i=0, fim=0; //criado fim de jogo, e escolha do switch
    int escolha,er;

    TLista listaPersonagem; //criado lista
    inicializa(listaPersonagem); //inicializar lista
    TPersonagem armazenador; // criando função que irá ser util para inserções

    while (fim==0){ //mantem o jogo rodando até que peça pra sair

    cout << "\n------------------------------------------";
    cout << "\n------------------------------------------";
    cout << "\nSem Dungeons && Nem Dragons";
    cout << "\n------------------------------------------";
    cout << "\n------------------------------------------"; // menu
    cout << "\n";
    cout << "\n";
    cout << "0 - Jogar"<<endl;
    cout << "1 - Criar Personagem"<< endl;
    cout << "2 - Remover Personagem"<< endl;
    cout << "3 - Instrucoes"<< endl;
    cout << "4 - Creditos"<< endl;
    cout << "5 - Sair"<< endl;
    cout << "\n";
    cout << "\n------------------------------------------";
    cout << "\n------------------------------------------";

    cout << "\nOpcao: ";
    cin >> i; // usado para o switch

     switch (i) {

        case 0:
            system("cls");
            imprimeLista(listaPersonagem); //função da biblioteca para imprimir a lista

            cout << endl << endl << "digite o numero do personagem que vc deseja carregar";
            cin >> i;
            jogo (listaPersonagem,i);
        break;

        case 1:
            system("cls");

            cout << "digite o nome: "; //teste.nome recebe o nome, e .classe recebe a classe
            cin >> armazenador.nome;
            cout << endl << endl << "Escolha sua classe: "<<endl;
            cout << "0 - Templar \n1 - Berserker \n2 - Sorcerer \n3 - Priest \n4 - Arqueiro \n5 - Assassino" << endl;
            cout << "classe: ";
            cin >> escolha;

            insereFim(listaPersonagem, armazenador, escolha); //usado para inserir na lista
            system("cls");
        break;

        case 2:
         system ("cls");
            imprimeLista(listaPersonagem);
            cout <<"Escolha qual personagem voce quer dar um perdido: ";
            cin >> er;
            removerLista(listaPersonagem,er);
         system ("cls");
        break;
        case 3:
         system("cls");
         cout << "\n--------------------------------------------------------------------------------------------------------";
         cout <<"\n  Este rpg consiste em um simples sistema de combate onde voce pode bater, defender ou utilizar"<< endl;
         cout <<"uma skill, conforme aua classe, são elas: "<< endl;
         cout << "\n--------------------------------------------------------------------------------------------------------";
         cout <<"\n ->Templar - Taunt, onde sua armadura e aumentada";
         cout <<"\n ->Berserker - Furia, onde o dano da sua arma e aumentada";
         cout <<"\n ->Sorcerer - Concentrar, onde sua inteligencia e aumentada";
         cout <<"\n ->Priest - Curar, onde ele aumenta sua vida";
         cout <<"\n ->Assassino - Evasiva, onde ele evita quaisquer dano do seu inimigo";
         cout <<"\n ->Arqueiro - Vigor, onde sua agilidade e aumentada";
         cout << "\n--------------------------------------------------------------------------------------------------------\n";
         system("pause");
         system("cls");
        break;
        case 4:
            system("cls");
            cout << "--------------------------------------------------------------------------------------------------------\n";
            cout << "UNIVERSIDADE DO VALE DO ITAJAI - UNIVALI" << endl;
            cout << "Professor: Rafael de Santiago" << endl;
            cout << "Disciplina: Programacao Orientada a Objeto" << endl;
            cout << "Engenharia de Computacao - 3 periodo" << endl;
            cout << "Aluno: Joao Paulo Roslindo - Gustavo Copini Decol" << endl;
            cout << "\n--------------------------------------------------------------------------------------------------------\n";
            system("pause");
            system("cls");

        break;
        case 5:
        fim= 1;
        break;

    }
    }
}
