#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include <iostream>
using namespace std;
#include "custo.h"
#include "visualizacao.h"
enum ModalidadeAutomovel{PASSEIO,CAMINHONETE,UTILITARIO,CAMINHAO, MOTO};

class Automovel :public Custo, public Visualizacao
{
private:

    ModalidadeAutomovel tipo;
    string placa;
    string cor;
    string modelo;
    float manutencao;

public:

    Automovel();
    void imprimirConsole();

    string getPlaca() const;
    void setPlaca(const string &value);
    string getCor() const;
    void setCor(const string &value);
    string getModelo() const;
    void setModelo(const string &value);
    float getManutencao() const;
    void setManutencao(float value);

    float getCusto();

    ModalidadeAutomovel getTipo() const;
    void setTipo(const ModalidadeAutomovel &value);
};

#endif // AUTOMOVEL_H
