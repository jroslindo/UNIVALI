#include <iostream>
using namespace std;
#include "professoradministrativo.h"

int main()
{

    ProfessorAdministrativo adm(2);
    adm.setNome("Gustavo");
  //adm.setCpf("105.089.959-81");
  //adm.setIdade(19);
    adm.setDisciplina("Matematica",0);
    adm.setDisciplina("Fisica",1);
    adm.setAnosDeCasa(2);
    adm.setCadastroProfissional("9959-8");

    cin>>adm;
    cout<< adm;
}
