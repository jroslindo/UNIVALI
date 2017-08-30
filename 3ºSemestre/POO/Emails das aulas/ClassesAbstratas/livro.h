#ifndef LIVRO_H
#define LIVRO_H

#include "obra.h"

class Livro: public Obra
{
private:
    int nroPaginas;
    string editora;
    int ano;
    string tema;
public:
    Livro();
    int getNroPaginas() const;
    void setNroPaginas(int value);
    string getEditora() const;
    void setEditora(const string &value);
    int getAno() const;
    void setAno(int value);
    string getTema() const;
    void setTema(const string &value);

    void imprimir();
};

#endif // LIVRO_H
