#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;

class Carro
{
private:

    string placa;
    string modelo;
    string marca;
    string cor;

public:

    Carro();

    string getPlaca() const;
    void setPlaca(const string &value);
    string getModelo() const;
    void setModelo(const string &value);
    string getMarca() const;
    void setMarca(const string &value);
    string getCor() const;
    void setCor(const string &value);

    bool operator==(const Carro &outro)const{
        return placa == outro.getPlaca();
    }

};

namespace std{
    template<>
    struct hash<Carro>{
        std::size_t operator () (const Carro &car)const{
            return(hash<string> () (car.getPlaca()));
        }
    };
}

#endif // CARRO_H
