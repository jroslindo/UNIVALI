#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;

class Personagem
{
private:
    string nome;
    string personagem;
    int nivel;
    int experiencia;
    int vida;
    int mana;
    int forca;
    int inteligencia;
    int agilidade;
public:
    Personagem();

    string getNome() const;
    void setNome(const string &value);

    string getPersonagem() const;
    void setPersonagem(const string &value);

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

    int getInteligencia() const;
    void setInteligencia(int value);

    int getAgilidade() const;
    void setAgilidade(int value);
};

#endif // PERSONAGEM_H
