#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>

using namespace std;


class Personagem
{
private:

    string nome;
    string classe;
    int nivel;
    int experiencia;
    float vida;
    float mana;
    float forca;
    float inteligencia;
    float agilidade;
    string nomeArma;
    float danoArma;
    string nomeArmadura;
    float defArmadura;

public:


    Personagem ();
    string getNome() const;
    void setNome(const string &value);

    string getClasse() const;
    void setClasse(const string &value);

    int getNivel() const;
    void setNivel(int value);

    int getExperiencia() const;
    void setExperiencia(int value);

    int getVida() const;
    void setVida(int value);

    int getMana() const;
    void setMana(int value);

    int getForca() const;
    void setForca(int value);

    float getInteligencia() const;
    void setInteligencia(float value);

    float getAgilidade() const;
    void setAgilidade(float value);

    string getNomeArma() const;
    void setNomeArma(const string &value);

    float getDanoArma() const;
    void setDanoArma(float value);

    string getNomeArmadura() const;
    void setNomeArmadura(const string &value);

    float getDefArmadura() const;
    void setDefArmadura(float value);

    void imprimeStatus();
};

#endif // PERSONAGEM_H
