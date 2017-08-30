#ifndef MAGO_H
#define MAGO_H

#include "personagem.h"

class Mago : public Personagem
{
private:
    int danoArma;
    string nomeArma;
public:
    Mago(string nome, string jogador);

    void imprimirMago();
    void baterComoMago(Personagem &p);

    int getDanoArma() const;
    void setDanoArma(int value);

    string getNomeArma() const;
    void setNomeArma(const string &value);
};

#endif // MAGO_H
