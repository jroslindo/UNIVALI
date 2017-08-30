#include <iostream>

using namespace std;
#include "livro.h"
#include "filmes.h"

int main()
{
    cout<<Obra::getcontadorObras()<<"\n";

    /*Livro x;
    x.setAutor("Hitler");
    x.setCodigo(123);
    x.setTitulo("Arte de queimar judeus");
    x.setNumPaginas(500);
    x.setEditora("Nazi");
    x.setTema("Aventura");
    x.imprimir();
    */

    Obra *obras[5];
    Livro *aux= new Livro();

    aux= new Livro;
    aux->setAutor("Gustavo");
    aux->setCodigo(123);
    aux->setTitulo("Como zerar uma prova");
    aux->setEditora("OI");
    aux->setNumPaginas(500);
    aux->setTema("Aventura");
    obras[0]=aux;

    aux= new Livro;
    aux->setAutor("Gustavo");
    aux->setCodigo(123);
    aux->setTitulo("Como zerar uma prova 2");
    aux->setEditora("OI");
    aux->setNumPaginas(500);
    aux->setTema("Aventura");
    obras[1]=aux;

    aux= new Livro;
    aux->setAutor("Gustavo");
    aux->setCodigo(123);
    aux->setTitulo("Como zerar uma prova3");
    aux->setEditora("OI");
    aux->setNumPaginas(500);
    aux->setTema("Aventura");
    obras[2]=aux;


    Filmes *aux2= new Filmes();

    aux2= new Filmes;
    aux2->setAutor("Gustavo");
    aux2->setTitulo("Como zerar uma prova 3: o Filme");
    aux2->setDuracao(1);
    aux2->setMidia("DVD");
    aux2->setTipo("Aventura");
    aux2->setAtores("asd");
    obras[3]=aux2;

    aux2= new Filmes;
    aux2->setAutor("Gustavo");
    aux2->setTitulo("Como zerar uma prova 3: o Filme");
    aux2->setDuracao(2);
    aux2->setMidia("DVD");
    aux2->setTipo("Aventura");
    aux2->setAtores("asd");
    obras[4]=aux2;

    cout<<Obra::getcontadorObras()<<"\n";
    delete obras[0];
    cout<<Obra::getcontadorObras()<<"\n";
    /*for(int i=0;i<5;i++){
        obras[i]->imprimir();
    }*/


    return 0;

}
