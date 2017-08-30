#include "mago.h"

Mago::Mago(string nome, string classe)
    :Personagem(nome,classe)
{
    setVida(50);
    setMana(100);
    setDano(10);
    setDefesa(0);

}
