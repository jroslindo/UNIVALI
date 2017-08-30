#include <iostream>

using namespace std;

#include <unordered_set>
#include <unordered_map>

#include"carro.h"




int main()
{
    Carro c1, c2, c3;

    c1.setPlaca("MBW 8899");
    c1.setMarca("Ford");
    c1.setModelo("Ranger");
    c1.setCor("Azul");

    c2.setPlaca("MJN 7899");
    c2.setMarca("Fiat");
    c2.setModelo("Siena");
    c2.setCor("Rosa");

    c3.setPlaca("MNS 6655");
    c3.setMarca("Volkswagen");
    c3.setModelo("Fusca");
    c3.setCor("Preto");

    unordered_map<string, Carro> carros;
    carros[c1.getPlaca()] = c1;
    carros[c2.getPlaca()] = c2;
    carros[c3.getPlaca()] = c3;

    cout<<carros["MJN 7899"].getModelo();

    cout<<"\n\nFOR:\n";
    for(auto i=carros.begin(); i!=carros.end();
        i++){
        cout<<i->first;
        cout<<i->second.getModelo();
        cout<<"\n";

    }

    cout<<"\n\nFOREACH:\n";
    for(pair<string, Carro> c: carros){
        cout<<c.second.getModelo();
        cout<<"\n";

    }





/*    unordered_set<Carro> carros;
    carros.insert(c1);
    carros.insert(c2);
    carros.insert(c3);

    unordered_set<Carro>::iterator it;
    it = carros.find(Carro("MBW 8899"));
    cout<<(*it).getModelo();
    cout<<"\n\nFOR:";
    for (it = carros.begin();
         it!=carros.end();it++){
        cout<<it->getModelo();
        cout<<"\n";
    }

    cout<<"\n\nFOREACH:";
    for (Carro c: carros){
        cout<<c.getModelo();
        cout<<"\n";
    }
*/



    return 0;
}

