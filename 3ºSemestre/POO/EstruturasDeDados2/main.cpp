#include <iostream>

using namespace std;
#include <unordered_set>
#include <unordered_map>
#include "carro.h"

int main()
{

    ///Utiliza uma tabela HASH por baixo

    ///////////////////
    ///UNORDERED SET///
    ///////////////////

    unordered_map<string, Carro> mcarros;

    Carro x;
    x.setPlaca("KEJ456");
    x.setCor("Preto");
    x.setModelo("Camaro");
    x.setMarca("kasopeas");

    Carro y;
    y.setPlaca("KIJ123");
    y.setCor("Azul");
    y.setModelo("VRUMMMMM");
    y.setMarca("Ferrari");

    mcarros[x.getPlaca()] = x;
    mcarros[y.getPlaca()] = y;

    /*
    ///Listagem dos carros
    for(pair<string, Carro> k: mcarros){
        cout<<"\n"<<k.first;
        cout<<"\n"<<k.second.getModelo();
    }
    */

    ///Pesquisa dos carros
    cout<<"\n"<<mcarros["KEJ456"].getCor();

    cout<<"\n";

    return 0;

    ///////////////////
    ///UNORDERED SET///
    ///////////////////

    unordered_set<Carro> carros;

    Carro a;
    a.setPlaca("KEJ456");
    a.setCor("Preto");
    a.setModelo("Seila");
    a.setMarca("Fiat");

    Carro b;
    b.setPlaca("KIJ123");
    b.setCor("Azul");
    b.setModelo("Umai");
    b.setMarca("Citroen");

    carros.insert(a);
    carros.insert(b);

    /*
    for(Carro c: carros){
        cout<<"\n"<<c.getModelo();
    }
    */

    Carro busca;
    busca.setPlaca("KEJ456");
    unordered_set<Carro>::iterator it;

    //carros.erase(busca);

    it = carros.find(busca);

    if(it!=carros.end()){
        cout<<"\nEncontrou: "<<it->getModelo();
    }else{
        cout<<"\nFalha na busca, nada foi encontrado!";
    }

    return 0;
}
