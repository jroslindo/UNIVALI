#ifndef OBRA_H
#define OBRA_H

#include<iostream>
using namespace std;

class Obra
{
private:
    static int contadorObras;
    int codigo;
    string titulo;
    string autor;
public:

    Obra();
    ~Obra();
    virtual void imprimir() = 0; //metodo abstrato
    int getCodigo() const;
    void setCodigo(int value);
    string getTitulo() const;
    void setTitulo(const string &value);
    string getAutor() const;
    void setAutor(const string &value);
    static int getContadorObras();
};

#endif // OBRA_H
