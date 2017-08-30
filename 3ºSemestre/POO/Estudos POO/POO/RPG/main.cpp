#include <iostream>
#include <cstdlib>
#include <time.h>
#include "personagem.h"
#include "monstro.h"

using namespace std;



int main()
{
    //geração da semente
    srand(time(NULL));

    Personagem a("Guerreiro", "Juca");
    a.setJogador("Rafael de Santiago");
    a.setSexo('m');

    Personagem b("Mago", "Carlinhos");
    b.setJogador("Rafael de Santiago");
    b.setSexo('m');

    Monstro m("Safadown", 100, 10);

    //enquanto o combate acontecer
    while(m.getVida() > 0 && (a.getVida()>0||b.getVida()>0)){
        //mago tenta acertar se estiver vivo
        if (rand()%2 == 0 && b.getVida() > 0){
            m.levarDano(b.getInteligencia());
        }
        //guerreiro tenta acertar se estiver vivo
        if (rand()%2 == 0 && a.getVida() > 0){
            m.levarDano(a.getForca());
        }
        //monstro tenta acertar se estiver vivo
        if (rand()%2 == 0 && m.getVida() > 0){
            //guerreiro?
            if (rand()%2 == 0){
                a.levarDano(m.getDano());
            }else{
                //mago?
                b.levarDano(m.getDano());
            }
        }
    }
    a.imprimir();
    b.imprimir();
    m.imprimir();

    return 0;
}

