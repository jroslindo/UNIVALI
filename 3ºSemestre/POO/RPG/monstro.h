#ifndef MONSTRO_H
#define MONSTRO_H
#include <iostream>
using namespace std;
class Monstro
{
private:
    string nome;
    int dano;
    int vida;
public:

    Monstro(string nome);
    Monstro(string nome, int vida, int dano);
    ~Monstro();


    string getNome() const;
    void setNome(const string &value);
    int getDano() const;
    void setDano(int value);
    int getVida() const;
    void setVida(int value);
    void levarDano(int dano);

    void imprimir();
};

#endif // MONSTRO_H
