#ifndef PROFESSORADMINISTRATIVO_H
#define PROFESSORADMINISTRATIVO_H
#include "professor.h"
#include "administrativo.h"

class ProfessorAdministrativo:
        public Professor, public Administrativo
{      
public:
    ProfessorAdministrativo(int ndis);
    ProfessorAdministrativo(string nome, int ndis);

    void setNome(string titulo, string nome);
    void setNome(string nome);

    friend ostream & operator<<
            (ostream & output,
             const ProfessorAdministrativo &pa);
    friend istream & operator>>
            (istream &input,
             ProfessorAdministrativo &pa);


};

#endif // PROFESSORADMINISTRATIVO_H
