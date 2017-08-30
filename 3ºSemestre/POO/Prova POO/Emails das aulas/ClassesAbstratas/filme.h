#ifndef FILME_H
#define FILME_H

#include "obra.h"

class Filme: public Obra
{
private:
    string atores;
    string tipo;
    int duracao;
    string midia;
public:
    Filme();
    string getAtores() const;
    void setAtores(const string &value);
    string getTipo() const;
    void setTipo(const string &value);
    int getDuracao() const;
    void setDuracao(int value);
    string getMidia() const;
    void setMidia(const string &value);

    void imprimir();
};

#endif // FILME_H
