#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>

using namespace std;

class Personagem
{
private:
    string nome;
    string jogador;
    int vida;
    int forca;
    int inteligencia;
public:
    Personagem(string nome, string jogador);

    string getNome() const;
    void setNome(const string &value);

    string getJogador() const;
    void setJogador(const string &value);

    int getVida() const;
    void setVida(int value);

    int getForca() const;
    void setForca(int value);

    int getInteligencia() const;
    void setInteligencia(int value);

    void bater(Personagem &p);
    void levardano(int dano);
    bool morreu();
    void imprimir();
};

#endif // PERSONAGEM_H
