#include "sorcerer.h"

Sorcerer::Sorcerer()
{

}

void Sorcerer::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: Obliterador das Chamas " << getNome();
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

void Sorcerer::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getInteligencia()+getDano()));
}

void Sorcerer::causaDano(Monstro &m, int danoSkill){
    m.setVida(m.getVida() - (getInteligencia()+getDano()+danoSkill));
}

void Sorcerer::levarDano(int dano){
    setVida(getVida() - dano);
}
