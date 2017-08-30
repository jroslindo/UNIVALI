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
    int defesa;

public:
    Monstro(string nome, int vida, int dano, int defesa);
    ~Monstro();


    int getVida() const;
    void setVida(int value);
    int getDefesa() const;
    void setDefesa(int value);
    int getDano() const;
    void setDano(int value);
};

#endif // MONSTRO_H
