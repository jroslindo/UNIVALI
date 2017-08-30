#ifndef OBRA_H
#define OBRA_H
#include <iostream>
using namespace std;

class Obra
{
private:

    int codigo;
    string titulo;
    string autor;

public:
    Obra();
    virtual void imprimir() = 0; //Metodo abstrato

    int getCodigo() const;
    void setCodigo(int value);
    string getTitulo() const;
    void setTitulo(const string &value);
    string getAutor() const;
    void setAutor(const string &value);

};

#endif // OBRA_H
