#include "assassino.h"

Assassino::Assassino()
{

}

void Assassino::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: O Exterminador " << getNome();
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


void Assassino::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getAgilidade()+getDano()));
}

void Assassino::causaDano(Monstro &m, int danoSkill){
    m.setVida(m.getVida() - (getAgilidade()+getDano()+danoSkill));
}

void Assassino::levarDano(int dano){
    setVida(getVida()- dano);
}
