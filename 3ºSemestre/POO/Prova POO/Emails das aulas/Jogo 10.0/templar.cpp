#include "templar.h"

Templar::Templar()
{

}

void Templar::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: O Arauto da Luz " << getNome();
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

void Templar::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getForca()+getDano()));
}

void Templar::causaDano(Monstro &m, int danoSkill){
    m.setVida(m.getVida() - (getForca()+getDano()+danoSkill));
}


void Templar::levarDano(int dano){
    setVida(getVida() - dano);
}
