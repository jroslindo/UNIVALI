#include "professoradministrativo.h"

ProfessorAdministrativo
    ::ProfessorAdministrativo(int ndis):
    Professor(ndis)
{

}

ProfessorAdministrativo
    ::ProfessorAdministrativo(
        string nome, int ndis):Professor(ndis){
    Professor::setNome(nome);
}

void ProfessorAdministrativo
     ::setNome(string titulo,
               string nome){
    Pessoa::setNome(titulo+" "+nome);
}

void ProfessorAdministrativo::
        setNome(string nome){
    Pessoa::setNome(nome);
}


ostream & operator<<
        (ostream & output,
         const ProfessorAdministrativo &pa){

    output<<"\nProfessor/Adm:"<<pa.getNome();
    output<<"\n\t -> disciplina:";
    for (int i=0; i<pa.getNumDisciplinas();i++){
        output<<"\n\t\t - "<<pa.getDisciplina(i);
    }
    output<<"\n\t -> "<<pa.getAnosDeCasa();
}

istream & operator>>
        (istream &input,
         ProfessorAdministrativo &pa){
    string nome;
    cout<<"\nDigite o nome: ";
    input>>nome;
    pa.setNome(nome);

    string disciplina;
    for (int i=0;i<pa.getNumDisciplinas();i++){
        cout<<"Digite a disciplina"<<i<<": ";
        input>>disciplina;
        pa.setDisciplina(disciplina,i);
    }
    int anos;
    cout<<"Digite os anos de casa: ";
    input>>anos;
    pa.setAnosDeCasa(anos);
}










