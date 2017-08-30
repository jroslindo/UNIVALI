#ifndef ALUNO_H
#define ALUNO_H
#include<iostream>
using namespace std;

class Aluno
{
private:
    string nome;
    int codigo;
public:
    Aluno();
    int getCodigo() const;
    void setCodigo(int value);
    string getNome() const;
    void setNome(const string &value);
};

#endif // ALUNO_H
