#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include<iostream>
using namespace std;

#include "monstro.h"

class Personagem
{

    string nome;
    string classe;
    int nivel;
    int vida;
    int mana;
    int forca;
    int inteligencia;
    int agilidade;
    int defesa;
    int dano;
    static int quantidadePersonagens;

public:

    Personagem();
    ~Personagem();

    virtual void causaDano(Monstro &m);
    virtual void causaDano(Monstro &m, int danoSkill);
    virtual void levarDano(int dano);
    virtual void imprimeStatus ()=0;


    static int getQuantidadePersonagens();
    static void setQuantidadePersonagens(int value);

    string getNome() const;
    void setNome(const string &value);
    int getVida() const;
    void setVida(int value);
    int getNivel() const;
    void setNivel(int value);
    string getClasse() const;
    void setClasse(const string &value);
    int getMana() const;
    void setMana(int value);
    int getForca() const;
    void setForca(int value);
    int getInteligencia() const;
    void setInteligencia(int value);
    int getAgilidade() const;
    void setAgilidade(int value);
    int getDefesa() const;
    void setDefesa(int value);
    int getDano() const;
    void setDano(int value);


};

#endif // PERSONAGEM_H
