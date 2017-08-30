#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
using namespace std;
#include "pessoa.h"

class Professor: public Pessoa
{
private:
    string * disciplinas;
    int numDisciplinas;
    int cargaHoraria;

public:
    Professor(int ndis);

    void setNome(string nome);

    int getNumDisciplinas() const;
    void setNumDisciplinas(int value);
    int getCargaHoraria() const;
    void setCargaHoraria(int value);
    void setDisciplina(string dis, int pos);
    string getDisciplina(int pos) const;
};

#endif // PROFESSOR_H
