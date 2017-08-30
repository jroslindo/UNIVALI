#ifndef LIVRO_H
#define LIVRO_H
#include "obra.h"

class Livro :public Obra
{
private:

    int numPaginas;
    string editora;
    int ano;
    string tema;

public:

    Livro();
    void imprimir();

    int getNumPaginas() const;
    void setNumPaginas(int value);
    string getEditora() const;
    void setEditora(const string &value);
    int getAno() const;
    void setAno(int value);
    string getTema() const;
    void setTema(const string &value);

};

#endif // LIVRO_H
