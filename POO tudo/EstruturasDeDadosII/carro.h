#ifndef CARRO_H
#define CARRO_H

#include<iostream>

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
    Carro(string placa);
    string getPlaca() const;
    void setPlaca(const string &value);
    string getModelo() const;
    void setModelo(const string &value);
    string getMarca() const;
    void setMarca(const string &value);
    string getCor() const;
    void setCor(const string &value);

    bool operator==(const Carro &other) const
    {
        return (placa == other.getPlaca());
    }
};

namespace std {

  template <>
  struct hash<Carro>
  {
    std::size_t operator()(const Carro& k) const
    {
      return (hash<string>()(k.getPlaca()));
    }
  };
}

#endif // CARRO_H
