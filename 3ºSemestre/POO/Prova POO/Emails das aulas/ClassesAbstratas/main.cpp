#include <iostream>

using namespace std;

#include "livro.h"
#include "filme.h"

int main()
{
    Obra * obras[5];
    Filme * faux;
    Livro *laux;

    cout<<Obra::getContadorObras()<<"\n\n";

    faux = new Filme();
    faux->setCodigo(1);
    faux->setAutor("Francis Ford Copolla");
    faux->setTitulo("The Godfather");
    faux->setDuracao(500);
    faux->setTipo("Romance");
    faux->setMidia("VHS");
    faux->setAtores("Al Pacino, Diane Keaton, Robert De Niro");
    obras[0] = faux;

    faux = new Filme();
    faux->setCodigo(2);
    faux->setAutor("Francis Ford Copolla");
    faux->setTitulo("Apocalypse Now");
    faux->setDuracao(130);
    faux->setTipo("Drama");
    faux->setMidia("DVD");
    faux->setAtores("Martin Sheen, Marlon Brando, Robert Duvall");
    obras[1] = faux;

    laux  = new Livro();
    laux->setCodigo(3);
    laux->setTitulo("Eram os Deuses Astronautas?");
    laux->setAutor("Erick Von Daniken");
    laux->setEditora("Melhoramentos");
    laux->setNroPaginas(180);
    laux->setTema("Esoterismo");
    obras[2] = laux;

    laux  = new Livro();
    laux->setCodigo(4);
    laux->setTitulo("Sapiens: uma breve historia da humanidade");
    laux->setAutor("Yuval Noah Harari");
    laux->setEditora("L&PM");
    laux->setNroPaginas(464);
    laux->setTema("Antropologia");
    obras[3] = laux;

    laux  = new Livro();
    laux->setCodigo(5);
    laux->setTitulo("Homo Deus: uma breve historia do amanha");
    laux->setAutor("Yuval Noah Harari");
    laux->setEditora("Companhia das Letras");
    laux->setNroPaginas(448);
    laux->setTema("Antropologia");
    obras[4] = laux;

    /*for(int i; i<5; i++){
        obras[i]->imprimir();
    }*/

    cout<<Obra::getContadorObras()<<"\n\n";

    delete obras[0];

    cout<<Obra::getContadorObras()<<"\n\n";

    return 0;
}

