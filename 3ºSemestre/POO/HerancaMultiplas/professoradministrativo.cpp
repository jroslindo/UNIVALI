#include "professoradministrativo.h"

ProfessorAdministrativo::ProfessorAdministrativo(int nDis)
    :Professor (nDis)
{

}

ProfessorAdministrativo::ProfessorAdministrativo(string nome, int nDis)
    :Professor(nDis)
{
    Professor::setNome(nome);
}

void ProfessorAdministrativo::setNome(string titulo, string nome)
{
    Pessoa::setNome(titulo+" "+nome);
}

void ProfessorAdministrativo::setNome(string nome)
{
    Pessoa::setNome(nome);
}

ostream & operator<<(ostream  & output, const ProfessorAdministrativo &adm)
{
    output<<"\nProfessor/Adm: "<<adm.getNome();
    output<<"\n\t -> Disciplina: ";
    for(int i=0;i<adm.getNumDisciplinas();i++){
        output<<"\n\t - "<<adm.getDisciplina(i);
    }
    output<<"\n\t -> "<<adm.getAnosDeCasa();
}

istream & operator>>(istream  & input, ProfessorAdministrativo &adm)
{
    string nome;
    cout<<"\nDigite o nome: ";
    input>>nome;
    adm.setNome(nome);

    string disciplina;
    for(int i=0;i<adm.getNumDisciplinas();i++){
        cout<<"Digite a disciplina "<<i<<": ";
        input>>disciplina;
        adm.setDisciplina(disciplina,i);
    }
    int anos;
    cout<<"Digite os anos de casa: ";
    input>>anos;
    adm.setAnosDeCasa(anos);
}
