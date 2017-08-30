/*
UNIVERSIDADE DO VALE DO ITAJAI - UNIVALI
Professor: Rafael de Santiago
Disciplina: Programacao Orientada a Objeto
Engenharia de Computacao - 3 periodo
Aluno: Joao Paulo Roslindo - Gustavo Copini Decol
*/
#ifndef LISTAPERSONAGEM_H
#define LISTAPERSONAGEM_H
#define MAX 6
#include "personagem.h"
#include "templar.h"
#include "sorcerer.h"
#include "priest.h"
#include "berserker.h"
#include "assassino.h"
#include "arqueiro.h"
#include "jogador.h"
#include "monstro.h"

struct TPersonagem {

    string nome;
    string classe;  //nossa struct similar a pessoa
    int nivel;
    int experiencia;
    float vida;
    float mana;
    float forca;
    float inteligencia;
    float agilidade;
    string nomeArma;
    float danoArma;
    string nomeArmadura;
    float defArmadura;

};

struct TLista { //nossa lista com 6 elementos {0....5}

    TPersonagem elementos [MAX];
    int quantidade;
};

void inicializa (TLista &lista){ //inicia lista
    lista.quantidade=0;
}

void insereFim (TLista &lista, TPersonagem dado, int escolha){

    lista.elementos[lista.quantidade]=dado;

    if (escolha == 0){
        lista.elementos[lista.quantidade].classe ="Templar";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 150;
        lista.elementos[lista.quantidade].mana= 30;
        lista.elementos[lista.quantidade].forca= 4;
        lista.elementos[lista.quantidade].inteligencia=2;
        lista.elementos[lista.quantidade].agilidade = 1;
        lista.elementos[lista.quantidade].nomeArma= "Espada curta trincada";
        lista.elementos[lista.quantidade].danoArma=1;
        lista.elementos[lista.quantidade].nomeArmadura="Armadura de placas enferrujadas";
        lista.elementos[lista.quantidade].defArmadura=2;

    }
    if (escolha == 1){
        lista.elementos[lista.quantidade].classe ="Berserker";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 125;
        lista.elementos[lista.quantidade].mana= 30;
        lista.elementos[lista.quantidade].forca= 5;
        lista.elementos[lista.quantidade].inteligencia= 1;
        lista.elementos[lista.quantidade].agilidade= 2;
        lista.elementos[lista.quantidade].nomeArma= "Machado enferrujado";
        lista.elementos[lista.quantidade].danoArma=2;
        lista.elementos[lista.quantidade].nomeArmadura="Armadura de couro";
        lista.elementos[lista.quantidade].defArmadura=1;
    }
    if (escolha == 2){
        lista.elementos[lista.quantidade].classe ="Sorcerer";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 50;
        lista.elementos[lista.quantidade].mana= 100;
        lista.elementos[lista.quantidade].forca=1;
        lista.elementos[lista.quantidade].inteligencia= 5;
        lista.elementos[lista.quantidade].agilidade=0;
        lista.elementos[lista.quantidade].nomeArma= "Varinha de aprendiz";
        lista.elementos[lista.quantidade].danoArma=2;
        lista.elementos[lista.quantidade].nomeArmadura="Tunica de pano";
        lista.elementos[lista.quantidade].defArmadura=0;
    }
    if (escolha == 3){
        lista.elementos[lista.quantidade].classe ="Priest";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 80;
        lista.elementos[lista.quantidade].mana= 90;
        lista.elementos[lista.quantidade].forca= 1;
        lista.elementos[lista.quantidade].inteligencia= 4;
        lista.elementos[lista.quantidade].agilidade= 1;
        lista.elementos[lista.quantidade].nomeArma= "Orbe de vidro";
        lista.elementos[lista.quantidade].danoArma=1;
        lista.elementos[lista.quantidade].nomeArmadura="Roupao de pano";
        lista.elementos[lista.quantidade].defArmadura=1;
    }
    if (escolha == 4){
        lista.elementos[lista.quantidade].classe ="Arqueiro";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 80;
        lista.elementos[lista.quantidade].mana= 50;
        lista.elementos[lista.quantidade].forca= 1;
        lista.elementos[lista.quantidade].inteligencia= 3;
        lista.elementos[lista.quantidade].agilidade=4;
        lista.elementos[lista.quantidade].nomeArma= "Arco de madeira";
        lista.elementos[lista.quantidade].danoArma=2;
        lista.elementos[lista.quantidade].nomeArmadura="Colete de couro";
        lista.elementos[lista.quantidade].defArmadura=1;
    }
    if (escolha == 5){
        lista.elementos[lista.quantidade].classe ="Assassino";
        lista.elementos[lista.quantidade].nivel= 1;
        lista.elementos[lista.quantidade].vida= 100;
        lista.elementos[lista.quantidade].mana= 40;
        lista.elementos[lista.quantidade].forca= 3;
        lista.elementos[lista.quantidade].inteligencia= 2;
        lista.elementos[lista.quantidade].agilidade=5;
        lista.elementos[lista.quantidade].nomeArma= "Adaga enferrujada";
        lista.elementos[lista.quantidade].danoArma=2;
        lista.elementos[lista.quantidade].nomeArmadura="Manto negro";
        lista.elementos[lista.quantidade].defArmadura=0;
    }

    lista.quantidade++;
}

bool removerLista(TLista &lista, int er){
    int i=0;
    if(lista.quantidade <= 0){
          return false;
      }else{
          for(int i=er;i<lista.quantidade;i++){
              lista.elementos[i]=lista.elementos[i+1];
          }
          lista.quantidade--;
          return true;
      }
}

void imprimeLista (TLista &lista){
    int i;

    for (i=0; i<lista.quantidade; i++){
        cout <<"------------------------------------------"<< endl;
        cout << "   Nome: " << lista.elementos[i].nome << endl;
        cout << i << "  Classe: " << lista.elementos[i].classe << endl;
        cout << "   Nivel: " << lista.elementos[i].nivel << endl;
        cout <<"------------------------------------------"<< endl << endl;
    }
}

void menuJogo (){
    cout << endl << "-------------------------------------------"<< endl;
    cout << "Menu do jogo" << endl;
    cout << "0 - Ver status do personagem" << endl;
    cout << "1 - Lutar" << endl;
    cout << "2 - Voltar ao menu principal" << endl;
    cout << endl << "-------------------------------------------"<< endl;


}

void menuAcoes (){
    cout << "\n----------------------------------------------\n";
    cout << "0 - Bater\n";
    cout << "1 - Defender\n";
    cout << "2 - Usar habilidade\n";
    cout << "\n----------------------------------------------\n";
}

void lutar (TLista &lista,int posiLista,Personagem &p, Jogador &j){
    Monstro diabrete("diabrete", 1, 5,20);
    int escolha,assassinoSkill=0;


    while (diabrete.getVida() >0 && p.getVida() >0){
        system("cls");
        menuAcoes();
        cout << "\n\nEscolha sua acao: " << endl;
        cin >> escolha;

        switch (escolha) {
        case 0:
            diabrete.levarDanoComoMonstro(p.getDanoArma()+p.getForca()+p.getAgilidade() +p.getInteligencia());
            cout << "Diabrete com " << diabrete.getVida() << " de vida " << endl ;
            diabrete.causarDanoComoMonstro(p,diabrete.getAtaque());
            cout << "Jogador com " << p.getVida() << " de vida " << endl ;
            system("pause");
        break;
        case 1:
            diabrete.causarDanoComoMonstro(p, diabrete.getAtaque() - p.getDefArmadura());
            cout << "jogador com " << p.getVida() << " de vida " << endl ;
            system("pause");
        break;

        case 2:
            //----------------------------------------------------------------------
            if (p.getClasse() == "Templar" && p.getMana()>=6){
                j.realizarTaunt(p);
                p.imprimeStatus();
            }
            if (p.getClasse() == "Templar" && p.getMana() < 6){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------
            if (p.getClasse() == "Berserker" && p.getMana() >=6){
                j.ativarFuria(p);
                p.imprimeStatus();
            }
            if (p.getClasse() == "Berserker" && p.getMana() < 6){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------
            if (p.getClasse() == "Sorcerer" && p.getMana() >=15){
                j.concentrar(p);
                p.imprimeStatus();
            }
            if (p.getClasse() == "Sorcerer" && p.getMana() < 15){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------
            if (p.getClasse() == "Priest" && p.getMana() >=10){
                j.realizarCura(p);
                p.imprimeStatus();
            }
            if (p.getClasse() == "Priest" && p.getMana() < 10){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------
            if (p.getClasse() == "Arqueiro" && p.getMana() >=7){
                j.realizarCura(p);
                p.imprimeStatus();
            }
            if (p.getClasse() == "Arqueiro" && p.getMana() < 7){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------
            if (p.getClasse() == "Assassino" && p.getMana() >=1){
                j.esquivar(p);
                p.imprimeStatus();
                assassinoSkill=1;
            }
            if (p.getClasse() == "Assassino" && p.getMana() < 1){
                cout << "Voce nao possui mana suficiente para isso";
            }
            //-----------------------------------------------------------------------


            if(assassinoSkill==0)
            diabrete.causarDanoComoMonstro(p,diabrete.getAtaque());
            assassinoSkill=0;
            cout << "\n\nJogador com " << p.getVida() << " de vida " << endl;
            system("pause");
        }
        }

        if(p.getVida()>0){
             cout <<"Voce venceu!!!\n\n";
             p.setNivel(p.getNivel()+1);
             p.setVida(lista.elementos[posiLista].vida);
             p.setMana(lista.elementos[posiLista].mana);
             p.setDefArmadura(lista.elementos[posiLista].defArmadura);
             lista.elementos[posiLista].nivel= p.getNivel();

        }else{
             cout <<"Voce perdeu :C";

        }

        system("pause");
        system("cls");

}

void jogo (TLista &lista, int posicaoDaLista){
    system("cls");

    Personagem personagem; //criei um personagem
    Jogador jogador1; //e o jogador, o jogador e uma variavel


    jogador1.teste(personagem, lista.elementos[posicaoDaLista].nome, lista.elementos[posicaoDaLista].classe, lista.elementos[posicaoDaLista].nivel,
    lista.elementos[posicaoDaLista].experiencia, lista.elementos[posicaoDaLista].vida, lista.elementos[posicaoDaLista].mana,
    lista.elementos[posicaoDaLista].forca, lista.elementos[posicaoDaLista].inteligencia, lista.elementos[posicaoDaLista].agilidade,
    lista.elementos[posicaoDaLista].nomeArma, lista.elementos[posicaoDaLista].danoArma,
    lista.elementos[posicaoDaLista].nomeArmadura, lista.elementos[posicaoDaLista].defArmadura );

    // acima foram feitas as atribuições das info da lista em cada classe, dependendo da escolha do personagem;
int escolha, fim=0;

    while (fim==0){ // while para se manter no menudo jogo realizando funções
    menuJogo(); // funcao de print

    cout << endl << "Opcao" ; //a op
    cin >> escolha;

    switch (escolha) {
    case 0:
        personagem.imprimeStatus();
        system("pause");
        system("cls");
    break;

    case 1:
       lutar(lista,posicaoDaLista,personagem, jogador1);
    break;

    case 2:
        fim=1;
    break;
    }

    }

    system("cls");
}

#endif // LISTAPERSONAGEM_H
