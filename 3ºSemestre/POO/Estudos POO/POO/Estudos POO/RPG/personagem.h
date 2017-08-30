#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;

class Personagem
{

private:

    string nome;
    string classe;
    int vida;
    int mana;
    int dano;
    int defesa;

public:

    Personagem(string nome, string classe);

    void imprimirPersonagem();

    string getNome() const;
    void setNome(const string &value);
    string getClasse() const;
    void setClasse(const string &value);
    int getVida() const;
    void setVida(int value);
    int getMana() const;
    void setMana(int value);
    int getDano() const;
    void setDano(int value);
    int getDefesa() const;
    void setDefesa(int value);
};

#endif // PERSONAGEM_H
