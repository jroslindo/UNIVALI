#include "priest.h"

Priest::Priest()
{

}

void Priest::imprimeStatus (){

    cout << "\n------------------------STATUS------------------------";
    if (getNivel() <=5 ){
        cout << "\nNome: Aprendiz " << getNome();
    }

    if(getNivel() >=6){
        cout << "\nNome: O Discipulo da Luz " << getNome();
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

void Priest::causaDano(Monstro &m){
    m.setVida(m.getVida() - (getInteligencia()+getDano()));
}

void Priest::causaDano(Monstro &m, int danoSkill){
    m.setVida(m.getVida() - (getInteligencia()+getDano()+danoSkill));
}


void Priest::levarDano(int dano){
    setVida(getVida() - dano);
}
