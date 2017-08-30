#include <iostream>

using namespace std;
#include "personagem.h"
#include "monstro.h"

int main()
{
    Personagem jogador1("guerreiro"),jogador2("mago");

    Monstro diabrete("diabrete",5,2);

    cout << "vida: "<<diabrete.getVida();



}
