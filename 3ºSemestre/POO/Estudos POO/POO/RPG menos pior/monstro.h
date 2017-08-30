#ifndef MONSTRO_H
#define MONSTRO_H

#include <iostream>

using namespace std;

class Monstro
{

private:
    string nome;
    int vida;
    int dano;

public:
    Monstro();
    Monstro(string nome,int vida, int dano);
    ~Monstro();

    string getNome() const;
    void setNome(const string &value);
    int getVida() const;
    void setVida(int value);
    int getDano() const;
    void setDano(int value);
};

#endif // MONSTRO_H
