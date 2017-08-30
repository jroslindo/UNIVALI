#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;
class Personagem
{
private:
    string classe;
    int vida;
    string nome;
    int mana;
    int forca;
    int inteligencia;
    int destreza;
    int vigor;
    int carisma;
    char sexo;
    string jogador;
public:
    void setNome(string n);
    string getNome();

    void levarDano (int dano);
    void curar(int cura);
    void imprimir();

    Personagem(string classe, string nome);


    ~Personagem();

    int getMana() const;
    void setMana(int value);
    int getForca() const;
    void setForca(int value);
    int getInteligencia() const;
    void setInteligencia(int value);
    int getDestreza() const;
    void setDestreza(int value);
    int getVigor() const;
    void setVigor(int value);
    int getCarisma() const;
    void setCarisma(int value);
    char getSexo() const;
    void setSexo(char value);
    string getJogador() const;
    void setJogador(const string &value);
    int getVida() const;
    void setVida(int value);
};

#endif // PERSONAGEM_H
