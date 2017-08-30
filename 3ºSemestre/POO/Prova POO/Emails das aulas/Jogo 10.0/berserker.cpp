#include "berserker.h"

Berserker::Berserker()
{

}

void Berserker::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: O Esmaga-Cranio " << getNome();
    }

    cout << "\nClasse: " << getClasse();
    cout << "\nNivel: " << getNivel();
    cout << "\nVida: " << getVida();
    cout << "\nMana: " << getMana();
    cout << "\nForca: " << getForca();
    cout << "\nInteligencia: " << getInteligencia();
    cout << "\nAgilidade: " << getAgilidade();
    cout << "\nDefesa: " << getDefesa();
    cout << "\nDano: " << getDano();
    cout << "\n------------------------------------------------------\n\n";

}

void Berserker::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getForca()+getDano()));
}

void Berserker::causaDano(Monstro &m, int danoSkill){
    m.setVida(m.getVida() - (getForca()+getDano()+danoSkill));
}

void Berserker::levarDano(int dano){
    setVida(getVida() -dano);
}

