#include "professor.h"

Professor::Professor(int ndis)
{
    this->numDisciplinas = ndis;
    this->disciplinas = new string[ndis];
}

void Professor::setDisciplina(string dis, int pos){
    if(pos < this->numDisciplinas){
        this->disciplinas[pos] = dis;
    }
}

string Professor::getDisciplina(int pos) const{
    if (pos < this->numDisciplinas){
        return disciplinas[pos];
    }else{
        return "";
    }
}

void Professor::setNome(string nome){
    Pessoa::setNome("Prof. "+nome);
}









int Professor::getCargaHoraria() const
{
    return cargaHoraria;
}

void Professor::setCargaHoraria(int value)
{
    cargaHoraria = value;
}
int Professor::getNumDisciplinas() const
{
    return numDisciplinas;
}

void Professor::setNumDisciplinas(int value)
{
    numDisciplinas = value;
}
