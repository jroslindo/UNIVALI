#ifndef PROFESSORADMINISTRATIVO_H
#define PROFESSORADMINISTRATIVO_H
#include "professor.h"
#include "administrativo.h"

class ProfessorAdministrativo :public Professor, public Administrativo
{

public:

    ProfessorAdministrativo(int nDis);

    ProfessorAdministrativo(string nome, int nDis);
    void setNome(string titulo, string nome);
    void setNome(string nome);

    friend ostream & operator<<(ostream  & output, const ProfessorAdministrativo &adm);
    friend istream & operator>>(istream  & input, ProfessorAdministrativo &adm);
};

#endif // PROFESSORADMINISTRATIVO_H
