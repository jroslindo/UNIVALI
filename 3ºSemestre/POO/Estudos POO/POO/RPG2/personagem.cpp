#include "personagem.h"

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

string Personagem::getJogador() const
{
    return jogador;
}

void Personagem::setJogador(const string &value)
{
    jogador = value;
}

int Personagem::getVida() const
{
    return vida;
}

void Personagem::setVida(int value)
{
    vida = value;
}

int Personagem::getForca() const
{
    return forca;
}

void Personagem::setForca(int value)
{
    forca = value;
}

int Personagem::getInteligencia() const
{
    return inteligencia;
}

void Personagem::setInteligencia(int value)
{
    inteligencia = value;
}

Personagem::Personagem(string nome, string jogador)
{
    this->nome = nome;
    this->jogador = jogador;

    vida = 50;
    inteligencia = 2;
    forca = 2;
}

void Personagem::bater(Personagem &p){

    p.levardano(forca);

}

void Personagem::levardano(int dano){

    vida-=dano;

}

bool Personagem::morreu(){

    return vida <= 0;

}

void Personagem::imprimir(){

    cout << "\n-----------------------------------";
    cout << "\nNome: " <<nome;
    cout << "\nJogador: " <<jogador;
    cout << "\nVida: " <<vida;
    cout << "\nForca: " <<forca;
    cout << "\nInteligencia: " <<inteligencia;
    cout << "\n-----------------------------------";
}
