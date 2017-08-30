#include <iostream>
#include <windows.h>

using namespace std;
#include "berserker.h"
#include "templar.h"
#include "assassino.h"
#include "arqueiro.h"
#include "priest.h"
#include "sorcerer.h"
#include "monstro.h"

int main()
{
    Personagem *jogadores[5];

    int sair=0, escolha, opcao;
    string nome;
    int i, MAX;

    while (sair==0){
         system ("cls");
         cout << "-------------------------------------- Nem Dungeons && Nem Dragons -------------------------------------- ";
         cout << "\n1 - Jogar";
         cout << "\n2 - Criar Personagem";
         cout << "\n3 - Deletar Personagem";
         cout << "\n4 - Instrucoes";
         cout << "\n5 - Creditos";
         cout << "\n6 - Sair";
         cout << "\n---------------------------------------------------------------------------------------------------------";
         cout << "\n\nEscolha: ";
         cin >> escolha;

        switch (escolha) {

        case 1:
              system ("cls");
              MAX =jogadores[0]->getQuantidadePersonagens();

              if (MAX > 0){
              cout << "----------------------------Lista de Personagens----------------------------";
                  for (i=0; i<MAX; i++){
                      cout << "\n[" << i << "] Nome: " <<  jogadores[i]->getNome();
                  }
              cout << "\n----------------------------------------------------------------------------";

              cout << "\nEscolha seu personagem: ";
              cin >> escolha;

              while (sair==0){
                   system ("cls");
                   cout << "-------------MENU-------------";
                   cout << "\n1 - Lutar";
                   cout << "\n2 - Ver Status Personagem";
                   cout << "\n3 - Sair";
                   cout << "\n------------------------------\n";

                   cout << "\n\nEscolha: ";
                   cin >> opcao;

                   Monstro diabrete("diabrete", 30,5,0);
                   switch (opcao) {
                       case 1:

                            while (diabrete.getVida() >0 && jogadores[escolha]->getVida() >0 && sair==0){
                                system("cls");
                                cout << "-------------MENU-------------";
                                cout << "\n1 - Atacar";
                                cout << "\n2 - Usar skill";
                                cout << "\n3 - Defender";
                                cout << "\n4 - Meu Deus Do Ceu BERG";
                                cout << "\n------------------------------\n";

                                cout << "\n\nEscolha: ";
                                cin >> opcao;

                                if (opcao ==1){
                                    jogadores[escolha]->causaDano(diabrete);
                                    cout << "\nVida Monstro: " << diabrete.getVida();
                                    jogadores[escolha]->levarDano(diabrete.getDano());
                                    cout << "\nSua vida: " << jogadores[escolha]->getVida() << endl;


                                    system ("pause");
                                }
                                if (opcao ==2){
                                    jogadores[escolha]->causaDano(diabrete, 2);
                                    cout << "vida Monstro: " << diabrete.getVida();
                                    jogadores[escolha]->levarDano(diabrete.getDano());
                                    cout << "\nSua vida: " << jogadores[escolha]->getVida() << endl;
                                    system ("pause");
                                }
                                if (opcao == 3){
                                    jogadores[escolha]->levarDano(diabrete.getDano() - jogadores[escolha]->getDefesa());
                                    cout << "\nSua vida: " << jogadores[escolha]->getVida() << endl;
                                    system ("pause");
                                }
                                if (opcao == 4){
                                    sair =1;
                                    cout << "\nCorre BERG\n";
                                    cout << "\nVoce fugiu com sucesso\n";
                                    system("pause");
                                }
                            }

                            if (sair ==0 && diabrete.getVida() <=0){
                                cout << "\nVoce venceu, o diabrete foi morto\n";
                                jogadores[escolha]->setNivel(jogadores[escolha]->getNivel() + 1);
                                jogadores[escolha]->setVida(jogadores[escolha]->getVida() + 30);
                                system("pause");
                            }

                            sair =0;

                            if (jogadores[escolha]->getVida() <=0){
                                cout << "\nVoce morreu! Receberas 50 de vida para tentar denovo.\n";
                                sair = 1;
                                jogadores[escolha]->setVida(50);
                                system("pause");
                            }


                       break;

                       case 2:
                            jogadores[escolha]->imprimeStatus();
                            system ("pause");
                       break;

                       case 3:
                            sair=1;
                       break;

                   }
              }

              sair=0;

              }else{
                  cout << "Nao existem personagens criados!";
                  system ("pause");
              }


        break;

        case 2:
             system("cls");
             cout << "\nDigite seu nome: ";
             cin >> nome;
             cout << "\nClasses";
             cout << "\n1 - Berserker";
             cout << "\n2 - Templar";
             cout << "\n3 - Sorcerer";
             cout << "\n4 - Priest";
             cout << "\n5 - Assassino";
             cout << "\n6 - Arqueiro";
             cout << "\nEscolha sua classe: ";
             cin >> escolha;

             if (escolha ==1){
                 Berserker *aux;
                 aux = new Berserker;
                 aux->setNome(nome);
                 aux->setClasse("Berserker");
                 aux->setNivel(1);
                 aux->setVida(150);
                 aux->setMana(25);
                 aux->setForca(5);
                 aux->setInteligencia(1);
                 aux->setAgilidade(2);
                 aux->setDefesa(3);
                 aux->setDano(4);            
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }

             if (escolha ==2){
                 Templar *aux;
                 aux = new Templar;
                 aux->setNome(nome);
                 aux->setClasse("Templar");
                 aux->setNivel(1);
                 aux->setVida(170);
                 aux->setMana(20);
                 aux->setForca(4);
                 aux->setInteligencia(1);
                 aux->setAgilidade(1);
                 aux->setDefesa(5);
                 aux->setDano(1);
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }

             if (escolha ==3){
                 Sorcerer *aux;
                 aux = new Sorcerer;
                 aux->setNome(nome);
                 aux->setClasse("Sorcerer");
                 aux->setNivel(1);
                 aux->setVida(50);
                 aux->setMana(60);
                 aux->setForca(1);
                 aux->setInteligencia(5);
                 aux->setAgilidade(2);
                 aux->setDefesa(1);
                 aux->setDano(5);
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }

             if (escolha ==4){
                 Priest *aux;
                 aux = new Priest;
                 aux->setNome(nome);
                 aux->setClasse("Priest");
                 aux->setNivel(1);
                 aux->setVida(60);
                 aux->setMana(40);
                 aux->setForca(1);
                 aux->setInteligencia(4);
                 aux->setAgilidade(2);
                 aux->setDefesa(1);
                 aux->setDano(2);
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }

             if (escolha ==5){
                 Assassino *aux;
                 aux = new Assassino;
                 aux->setNome(nome);
                 aux->setClasse("Assassino");
                 aux->setNivel(1);
                 aux->setVida(100);
                 aux->setMana(30);
                 aux->setForca(3);
                 aux->setInteligencia(2);
                 aux->setAgilidade(5);
                 aux->setDefesa(2);
                 aux->setDano(4);
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }

             if (escolha ==6){
                 Arqueiro *aux;
                 aux = new Arqueiro;
                 aux->setNome(nome);
                 aux->setClasse("Arqueiro");
                 aux->setNivel(1);
                 aux->setVida(75);
                 aux->setMana(30);
                 aux->setForca(2);
                 aux->setInteligencia(3);
                 aux->setAgilidade(4);
                 aux->setDefesa(1);
                 aux->setDano(5);
                 jogadores[jogadores[0]->getQuantidadePersonagens()]=aux;
             }        

            jogadores[jogadores[0]->getQuantidadePersonagens()]->imprimeStatus();
            jogadores[0]->setQuantidadePersonagens(jogadores[0]->getQuantidadePersonagens() +1);
            cout<< "\n\n";
            system("pause");

        break;

        case 3:
            system("cls");            
            MAX =jogadores[0]->getQuantidadePersonagens();
            cout << "----------------------------Lista de Personagens----------------------------";

            if (MAX > 0){
                for (i=0; i<MAX; i++){
                    cout << "\n[" << i << "] Nome: " <<  jogadores[i]->getNome();
                }
            cout << "\n----------------------------------------------------------------------------";

            cout << "\n\nQual personagem voce deseja apagar: ";
            cin >> escolha;

            if (escolha == 0){
                for (i=0; i<MAX; i++){
                    jogadores[i]= jogadores[i+1];
                }
                MAX--;
                jogadores[0]->setQuantidadePersonagens(MAX);
            }else if(escolha==MAX){
                MAX--;
                jogadores[0]->setQuantidadePersonagens(MAX);
            }else{
                for (i=escolha; i<MAX; i++){
                    jogadores[i]= jogadores[i+1];
                }
                MAX--;
                jogadores[0]->setQuantidadePersonagens(MAX);
            }


            }else{
                cout << "\n\nNao existem personagens criados!";
            }
            cout << endl<< endl;
            system ("pause");
        break;

        case 4:
            system("cls");
            cout << "-------------------------INSTRUCOES-------------------------";
            cout << "\n\nNeste jogo voce devera matar um monstro com algumas opcoes no combate";
            cout << "\nCrie seu personagem e va a luta";
            cout << "\n------------------------------------------------------------\n";
            system ("pause");
        break;

        case 5:
            system("cls");
            cout << "-------------------------CREDITOS---------------------------";
            cout << "\n\nUniversidade do Vale do Itajai - UNIVALI";
            cout << "\nCurso: Engenharia de Computacao";
            cout << "\nProfessor: Rafael de Santiago";
            cout << "\nDisciplina: Programacao Orientada a Objetos";
            cout << "\nAlunos: Gustavo Copini Decol e Joao Paulo Roslindo";
            cout << "\n------------------------------------------------------------";
            system ("pause");
        break;

        case 6:
            sair=1;
        break;

         }

    }
}
