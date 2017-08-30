#include "personagem.h"

Personagem::Personagem(string classe, string nome)
{
    this->classe = classe;
    this->nome = nome;
    if (this->classe == "Mago"){
        vida            = 30;
        mana            = 100;
        forca           = 3;
        inteligencia    = 20;
        destreza        = 3;
        carisma         = 5;
        vigor           = 5;
    }else{
        if (this->classe == "Guerreiro"){
            vida            = 100;
            mana            = 10;
            forca           = 20;
            inteligencia    = 3;
            destreza        = 15;
            carisma         = 5;
            vigor           = 20;
        }else{
            vida            = 10;
            mana            = 1;
            forca           = 2;
            inteligencia    = 2;
            destreza        = 2;
            carisma         = 2;
            vigor           = 2;
        }
    }
}



Personagem::~Personagem(){
    cout<<"\n"<<nome<<" foi desalocado da memoria!!!";
}

void Personagem::levarDano (int dano){
    vida = vida - dano;
}

void Personagem::curar(int cura){
    vida = vida + cura;
}

void Personagem::imprimir(){
    cout<<"\n---------------------------";
    cout<<"\nNome:\t"<<nome;
    cout<<"\nclasse:\t"<<classe;
    cout<<"\nJogador:\t"<<jogador;
    cout<<"\nSEXO: "<<sexo;
    cout<<"\nVida:\t"<<vida;
    cout<<"\nMana:\t"<<mana;
    cout<<"\nForca:\t"<<forca;
    cout<<"\nDestreza:\t"<<destreza;
    cout<<"\nVigor:\t"<<vigor;
    cout<<"\nInteligencia:\t"<<inteligencia;
    cout<<"\nCarisma:\t"<<carisma;
    cout<<"\n---------------------------";
}


int Personagem::getMana() const
{
    return mana;
}

void Personagem::setMana(int value)
{
    mana = value;
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

int Personagem::getDestreza() const
{
    return destreza;
}

void Personagem::setDestreza(int value)
{
    destreza = value;
}

int Personagem::getVigor() const
{
    return vigor;
}

void Personagem::setVigor(int value)
{
    vigor = value;
}

int Personagem::getCarisma() const
{
    return carisma;
}

void Personagem::setCarisma(int value)
{
    carisma = value;
}

char Personagem::getSexo() const
{
    return sexo;
}

void Personagem::setSexo(char value)
{
    sexo = value;
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
void Personagem::setNome(string n){
    nome = n;
}

string Personagem::getNome(){
    return nome;
}

