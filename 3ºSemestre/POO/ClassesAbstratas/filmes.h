#ifndef FILMES_H
#define FILMES_H
#include "obra.h"

class Filmes: public Obra
{
private:

    string atores;
    string tipo;
    int duracao;
    string midia;

public:

    Filmes();
    void imprimir();

    string getAtores() const;
    void setAtores(const string &value);
    string getTipo() const;
    void setTipo(const string &value);
    int getDuracao() const;
    void setDuracao(int value);
    string getMidia() const;
    void setMidia(const string &value);

};

#endif // FILMES_H
