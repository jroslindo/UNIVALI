#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;

class Personagem{

private:

    string classe;
    int forca;
    int vida;
    int mana;
    int inteligencia;
    int carisma;
    int destreza;

public:
    Personagem();

    Personagem (string classe);

    ~Personagem();

    void imprimir();

    string getClasse() const;
    void setClasse(const string &value);

    int getVida() const;
    void setVida(int value);

    int getMana() const;
    void setMana(int value);

    int getInteligencia() const;
    void setInteligencia(int value);

    int getCarisma() const;
    void setCarisma(int value);

    int getDestreza() const;
    void setDestreza(int value);


    int getForca() const;
    void setForca(int value);
    };

#endif // PERSONAGEM_H
