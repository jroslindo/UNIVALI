#include "arqueiro.h"

Arqueiro::Arqueiro()
{

}

void Arqueiro::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: O Infiltrador " << getNome();
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


void Arqueiro::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getAgilidade()+getDano()));
}

void Arqueiro::causaDano(Monstro &m,int danoSkill){
    m.setVida(m.getVida() - (getAgilidade()+getDano()+danoSkill));
}

void Arqueiro::levarDano(int dano){
    setVida(getVida()-dano);
}
