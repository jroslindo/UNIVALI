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

int Personagem::getNivel() const
{
    return nivel;
}

void Personagem::setNivel(int value)
{
    nivel = value;
}

int Personagem::getExperiencia() const
{
    return experiencia;
}

void Personagem::setExperiencia(int value)
{
    experiencia = value;
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

int Personagem::getForca() const
{
    return forca;
}

void Personagem::setForca(int value)
{
    forca = value;
}

float Personagem::getInteligencia() const
{
    return inteligencia;
}

void Personagem::setInteligencia(float value)
{
    inteligencia = value;
}

float Personagem::getAgilidade() const
{
    return agilidade;
}

void Personagem::setAgilidade(float value)
{
    agilidade = value;
}

string Personagem::getNomeArma() const
{
    return nomeArma;
}

void Personagem::setNomeArma(const string &value)
{
    nomeArma = value;
}

float Personagem::getDanoArma() const
{
    return danoArma;
}

void Personagem::setDanoArma(float value)
{
    danoArma = value;
}

string Personagem::getNomeArmadura() const
{
    return nomeArmadura;
}

void Personagem::setNomeArmadura(const string &value)
{
    nomeArmadura = value;
}

float Personagem::getDefArmadura() const
{
    return defArmadura;
}

void Personagem::setDefArmadura(float value)
{
    defArmadura = value;
}

Personagem :: Personagem (){    

}

void Personagem::imprimeStatus(){
    cout << "nome: " << nome << endl;
    cout << "classe: " << classe << endl;
    cout << "nivel: " << nivel << endl;
    cout << "vida: " << vida << endl;
    cout << "mana: " << mana << endl;
    cout << "forca: " << forca << endl;
    cout << "inteligencia: " << inteligencia << endl;
    cout << "agilidade: " << agilidade << endl;
    cout << "nome da arma: " << nomeArma << endl;
    cout << "dano da arma: " << danoArma << endl;
    cout << "nome da armadura: " << nomeArmadura << endl;
    cout << "defesa da armadura: " << defArmadura << endl;

}
