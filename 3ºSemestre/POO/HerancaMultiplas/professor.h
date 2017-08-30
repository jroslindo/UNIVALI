#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoa.h"
#include <iostream>
using namespace std;

class Professor :public Pessoa
{

private:

    string *disciplinas;
    int numDisciplinas;
    int cargaHoraria;

public:

    Professor(int nDis);

    void setNome(string nome);

    int getNumDisciplinas() const;
    void setNumDisciplinas(int value);

    int getCargaHoraria() const;
    void setCargaHoraria(int value);

    string getDisciplina(int pos) const;
    void setDisciplina(string dis, int pos);

};

#endif // PROFESSOR_H
