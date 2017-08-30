#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
using namespace std;

class Personagem
{
private:
    string nome;
public:
    Personagem();

  string getNome() const;
    void setNome(const string &value);
};

#endif // PERSONAGEM_H
