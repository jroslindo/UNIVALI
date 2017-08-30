#include <iostream>

using namespace std;
#include "professoradministrativo.h"
int main()
{

    ProfessorAdministrativo pa(2);
    pa.setNome("Luis");
    pa.setCpf("000.000.000-00");
    pa.setIdade(45);
    pa.setDisciplina("Matematica", 0);
    pa.setDisciplina("Quimica", 1);
    pa.setAnosDeCasa(35);
    pa.setCadastroProfissional("9975-1");
    cin>>pa;
    cout<< pa;


    return 0;
}

