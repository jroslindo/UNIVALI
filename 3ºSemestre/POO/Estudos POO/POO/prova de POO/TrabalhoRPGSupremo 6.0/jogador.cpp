#include "jogador.h"

Jogador::Jogador()

{

}

void Jogador::teste(Personagem &p,string nome, string classe, int nivel, int experiencia, float vida, float mana, float forca, float inteligencia,
                    float agilidade, string nomeArma, float danoArma, string nomeArmadura, float defArmadura)
{
    p.setNome(nome);
    p.setClasse(classe);
    p.setNivel(nivel);
    p.setExperiencia(experiencia);
    p.setVida(vida);
    p.setMana(mana);
    p.setForca(forca);
    p.setInteligencia(inteligencia);
    p.setAgilidade(agilidade);
    p.setNomeArma(nomeArma);
    p.setDanoArma(danoArma);
    p.setNomeArmadura(nomeArmadura);
    p.setDefArmadura(defArmadura);
}
