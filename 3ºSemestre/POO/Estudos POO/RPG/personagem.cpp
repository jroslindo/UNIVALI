#include "personagem.h"

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

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

int Personagem::getDano() const
{
    return dano;
}

void Personagem::setDano(int value)
{
    dano = value;
}

int Personagem::getDefesa() const
{
    return defesa;
}

void Personagem::setDefesa(int value)
{
    defesa = value;
}

Personagem::Personagem(string nome, string classe)
{
    this->nome = nome;
    this->classe = classe;
}

void Personagem::imprimirPersonagem(){

    cout<<"Nome: "<<getNome()<<endl;
    cout<<"Classe: "<<getClasse()<<endl;
    cout<<"Vida: "<<getVida()<<endl;
    cout<<"Mana: "<<getMana()<<endl;
    cout<<"Dano: "<<getDano()<<endl;
    cout<<"Defesa: "<<getDefesa()<<endl;

}
