#ifndef JOGADOR_H
#define JOGADOR_H

#include<iostream>
using namespace std;
class Jogador
{
private:
    int camisa;
    string nome;
public:
    Jogador();
    int getCamisa() const;
    void setCamisa(int value);
    string getNome() const;
    void setNome(const string &value);
};

#endif // JOGADOR_H
