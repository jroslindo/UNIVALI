#include <iostream>

using namespace std;

#include "controle.h"

int main()
{

    Controle ctrl;

    Juridico f1;
    f1.setCNPJ("000");
    f1.setNome("UNIVALI");
    f1.setDataCadastro("10/01/2001");
    f1.setEndereco("Rua Uruguai");


    Fisico f2;
    f2.setCPF("111-12");
    f2.setNome("Jose Bonifacio");
    f2.setDataCadastro("01/02/2016");
    f2.setEndereco("Rua Jose Gall");

    Veiculo v1, v2, v3, v4;
    v1.setPlaca("MMM 1111");
    v1.setAno(2014);
    v1.setCor("branco");
    v1.setMarca("Chevrolet");
    v1.setModelo("Montana");
    v1.setTipo(carro);

    v2.setPlaca("MZZ 2222");
    v2.setAno(2003);
    v2.setCor("branco");
    v2.setMarca("Ford");
    v2.setModelo("Fiesta");
    v2.setTipo(carro);


    v3.setPlaca("MH 3333");
    v3.setAno(2015);
    v3.setCor("branco");
    v3.setMarca("Honda");
    v3.setModelo("CG");
    v3.setTipo(moto);

    v4.setPlaca("KG 1234");
    v4.setAno(2002);
    v4.setCor("Verde");
    v4.setMarca("Honda");
    v4.setModelo("Sahara");
    v4.setTipo(moto);

    ctrl.inserirCliente(f1);
    ctrl.inserirVeiculos(f1.getId(), v1);
    ctrl.inserirVeiculos(f1.getId(), v2);

    ctrl.inserirCliente(f2);
    ctrl.inserirVeiculos(f2.getId(), v3);
    ctrl.inserirVeiculos(f2.getId(), v4);

    ctrl.listarVeiculosFinal(1);

    ctrl.inserirVeiculoVaga(0,v1.getPlaca());
    ctrl.inserirVeiculoVaga(27,v2.getPlaca());
    ctrl.inserirVeiculoVaga(27,v3.getPlaca());
    ctrl.inserirVeiculoVaga(27,v4.getPlaca());

    ctrl.inserirVeiculoVaga(0,v4.getPlaca());

    ctrl.exibirVagaVeiculo(v1.getPlaca());

    ctrl.listarHistoricoVaga(27);

    ctrl.listarVeiculosVaga(27);
    ctrl.listarVeiculosVaga(0);

    ctrl.listarVeiculosCliente("000");

    ctrl.listarVeiculosCliente(f2.getId());


    cout<<"\n\n\n";

    return 0;
}

