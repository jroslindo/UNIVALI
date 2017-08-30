#include "personagem.h"
#include <iostream>
using namespace std;

string Personagem::getClasse() const
{
    return classe;
}

void Personagem::setClasse(const string &value)
{
    classe = value;
}

int Personagem::getVida() const
{
    return vida;
}

void Personagem::setVida(int value)
{
    vida = value;
}

int Personagem::getMana() const
{
    return mana;
}

void Personagem::setMana(int value)
{
    mana = value;
}

int Personagem::getInteligencia() const
{
    return inteligencia;
}

void Personagem::setInteligencia(int value)
{
    inteligencia = value;
}

int Personagem::getCarisma() const
{
    return carisma;
}

void Personagem::setCarisma(int value)
{
    carisma = value;
}

int Personagem::getDestreza() const
{
    return destreza;
}

void Personagem::setDestreza(int value)
{
    destreza = value;
}

int Personagem::getForca() const
{
    return forca;
}

void Personagem::setForca(int value)
{
    forca = value;
}

Personagem::Personagem()
{

}

Personagem::~Personagem(){

}

Personagem::Personagem(string classe){

    if (classe=="mago"){

        vida = 30;
        mana = 100;
        forca = 3;
        inteligencia=20;
        carisma=5;
        destreza=3;


    }else

    if (classe=="guerreiro"){

        vida = 100;
        mana = 10;
        forca = 20;
        inteligencia=3;
        carisma=5;
        destreza=15;


    }else{

        vida = 10;
        mana = 2;
        forca = 2;
        inteligencia=2;
        carisma=2;
        destreza=2;
    }


}

/*void Personagem::imprimir(){

    cout << "/n---------------------------------------------------";
    cout << "\nVida: " << Vida;
    cout << "\nMana: " << getMana;
    cout << "\nForca: " << getForca;
    cout << "\nInteligencia: " << getInteligencia;
    cout << "\nCarisma: " << getCarisma;
    cout << "\nDestreza: " << getDestreza;
    cout << "\n---------------------------------------------------";

}*/
