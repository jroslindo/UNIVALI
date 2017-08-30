#include "personagem.h"
#include <fstream>
#include <cstring>

int Personagem::getNivel() const
{
    return nivel;
}

void Personagem::setNivel(int value)
{
    nivel = value;
}

string Personagem::getNome() const
{
    return nome;
}

void Personagem::setNome(const string &value)
{
    nome = value;
}

Item Personagem::getMaoEsq() const
{
    return maoEsq;
}

void Personagem::setMaoEsq(const Item &value)
{
    maoEsq = value;
}

Item Personagem::getMaoDir() const
{
    return maoDir;
}

void Personagem::setMaoDir(const Item &value)
{
    maoDir = value;
}

Item Personagem::getCabeca() const
{
    return cabeca;
}

void Personagem::setCabeca(const Item &value)
{
    cabeca = value;
}

Item Personagem::getArmadura() const
{
    return armadura;
}

void Personagem::setArmadura(const Item &value)
{
    armadura = value;
}
Personagem::Personagem()
{

}


bool Personagem::adicionarItem(Item x){
    if (mochila.size() < 10){
        mochila.push_back(x);
        return true;
    }else{
        return false;
    }
}

void Personagem::removerItem(int pos){
    mochila.erase(mochila.begin()+pos);
}

Item Personagem::getItem(int pos){
    return mochila[pos];
}

void Personagem::salvar(){
    ofstream saida;
    saida.open(nome+".save", ios::binary);
    char auxiliar[256];
    //gravando nome
    strcpy(auxiliar, nome.c_str());
    auxiliar[nome.size()] = '\0';
    saida.write(reinterpret_cast<char*>(&auxiliar),
                sizeof(char)*256
                );
    //gravando o nivel
    saida.write(reinterpret_cast<char*>(&nivel),
                sizeof(int));

    //gravando a mochila
    int qtd = mochila.size();
    saida.write(reinterpret_cast<char*>(&qtd),
                sizeof(int));
    for (Item x: mochila){
        //descricao do item
        strcpy(auxiliar, x.getDescricao().c_str());
        auxiliar[x.getDescricao().size()]='\0';
        saida.write(
                reinterpret_cast<char*>(&auxiliar),
                    sizeof(char)*256
                    );
        //poder do item
        float poder = x.getPoder();
        saida.write(
                reinterpret_cast<char*>(&poder),
                    sizeof(float)
                    );
    }
    //cabeca
    //descricao do item
    Item outros[] = {cabeca, maoEsq, maoDir, armadura};
    for(Item x: outros){
        strcpy(auxiliar, x.getDescricao().c_str());
        auxiliar[x.getDescricao().size()]='\0';
        saida.write(
                reinterpret_cast<char*>(&auxiliar),
                    sizeof(char)*256
                    );
        //poder do item
        float poder = x.getPoder();
        saida.write(
                reinterpret_cast<char*>(&poder),
                    sizeof(float)
                    );
    }

    saida.close();

}




void Personagem::carregar(string nome){
    ifstream entrada;
    entrada.open(nome+".save", ios::binary);
    if(!entrada){
        cout<<"\n\nErro ao abrir o arquivo!!!\n\n";
        return;
    }

    //recuperando nome
    char auxiliar[256];
    entrada.read(reinterpret_cast<char*>(&auxiliar),
                 sizeof(char)*256);
    this->nome = "";
    for (int i=0; i<256 && auxiliar[i]!='\0'; i++){
        this->nome += auxiliar[i];
    }
    //recuperando nivel
    entrada.read(
            reinterpret_cast<char*>(&this->nivel),
                sizeof(int));
    //recuperando itens da mochila
    int qtd;
    entrada.read(
            reinterpret_cast<char*>(&qtd),
                sizeof(int));
    mochila.clear();
    for (int i=0; i<qtd; i++){
        //desc
        entrada.read(
               reinterpret_cast<char*>(&auxiliar),
               sizeof(char)*256
                    );
        string descricao = "";
        for (int j=0; j<256 && auxiliar[j]!='\0';j++){
            descricao += auxiliar[j];
        }
        float poder;
        entrada.read(
               reinterpret_cast<char*>(&poder),
               sizeof(float)
                    );
        mochila.push_back(Item(descricao,poder));
    }

    //cabeca
    string descricao;
    float poder;
    entrada.read(
           reinterpret_cast<char*>(&auxiliar),
           sizeof(char)*256
                );
    descricao = "";
    for (int j=0; j<256 && auxiliar[j]!='\0';j++){
        descricao += auxiliar[j];
    }
    entrada.read(
           reinterpret_cast<char*>(&poder),
           sizeof(float)
                );
    setCabeca(Item(descricao,poder));

    //maoEsq
    entrada.read(
           reinterpret_cast<char*>(&auxiliar),
           sizeof(char)*256
                );
    descricao = "";
    for (int j=0; j<256 && auxiliar[j]!='\0';j++){
        descricao += auxiliar[j];
    }
    entrada.read(
           reinterpret_cast<char*>(&poder),
           sizeof(float)
                );
    setMaoEsq(Item(descricao,poder));
    //maoDir
    entrada.read(
           reinterpret_cast<char*>(&auxiliar),
           sizeof(char)*256
                );
    descricao = "";
    for (int j=0; j<256 && auxiliar[j]!='\0';j++){
        descricao += auxiliar[j];
    }
    entrada.read(
           reinterpret_cast<char*>(&poder),
           sizeof(float)
                );
    setMaoDir(Item(descricao,poder));
    //armadura
    entrada.read(
           reinterpret_cast<char*>(&auxiliar),
           sizeof(char)*256
                );
    descricao = "";
    for (int j=0; j<256 && auxiliar[j]!='\0';j++){
        descricao += auxiliar[j];
    }
    entrada.read(
           reinterpret_cast<char*>(&poder),
           sizeof(float)
                );
    setArmadura(Item(descricao,poder));




    entrada.close();


}


int Personagem::qtdItens(){
    return mochila.size();
}
