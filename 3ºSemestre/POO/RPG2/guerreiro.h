#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "personagem.h"

class Guerreiro: public Personagem // <---- HERANÇA
{
private:
    int danoArma;
    string nomeArma;
public:
    Guerreiro(string nome, string jogador);

    void baterComoGuerreiro(Personagem &p);
    void imprimirGuerreiro();

    int getDanoArma() const;
    void setDanoArma(int value);

    string getNomeArma() const;
    void setNomeArma(const string &value);
};

#endif // GUERREIRO_H
