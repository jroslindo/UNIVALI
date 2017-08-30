#ifndef CONTROLE_H
#define CONTROLE_H

#include <unordered_map>
#include <vector>
#include <list>

#include "fisico.h"
#include "juridico.h"

using namespace std;



class Controle
{
private:

    unordered_map<string, Cliente>clientes;
    unordered_map<string, Veiculo>veiculos;
    vector< list<Veiculo> > veicFinalPlaca;
    vector< list<Veiculo> > vagas;
    unordered_map<string, unsigned> veiculoVaga;
    vector< list<Veiculo> > historicoVagas;

public:
    Controle();
    bool inserirCliente(Cliente &c);
    bool inserirVeiculos(string idCliente, Veiculo &v);
    bool inserirVeiculoVaga(unsigned vaga, string placa);

    void listarVeiculosFinal(unsigned final);
    void listarVeiculosCliente(string idCliente);
    void exibirVagaVeiculo(string placa);
    void listarVeiculosVaga(unsigned vaga);
    void listarHistoricoVaga(unsigned vaga);

};

#endif // CONTROLE_H
