#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>


using namespace std;

enum TIPO_VEICULO{carro, moto};

class Veiculo
{
private:
    string placa;
    string marca;
    string modelo;
    unsigned ano;
    string cor;
    TIPO_VEICULO tipo;
public:
    Veiculo();
    string getPlaca() const;
    void setPlaca(const string &value);
    string getMarca() const;
    void setMarca(const string &value);
    string getModelo() const;
    void setModelo(const string &value);
    unsigned getAno() const;
    void setAno(const unsigned &value);
    string getCor() const;
    void setCor(const string &value);
    TIPO_VEICULO getTipo() const;
    void setTipo(const TIPO_VEICULO &value);
};

#endif // VEICULO_H
