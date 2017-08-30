#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include "item.h"

#include <vector>

class Personagem
{
private:
    int nivel;
    string nome;
    vector<Item> mochila;
    Item maoEsq;
    Item maoDir;
    Item cabeca;
    Item armadura;
public:
    Personagem();
    int getNivel() const;
    void setNivel(int value);
    string getNome() const;
    void setNome(const string &value);
    Item getMaoEsq() const;
    void setMaoEsq(const Item &value);
    Item getMaoDir() const;
    void setMaoDir(const Item &value);
    Item getCabeca() const;
    void setCabeca(const Item &value);
    Item getArmadura() const;
    void setArmadura(const Item &value);

    bool adicionarItem(Item x);
    void removerItem(int pos);
    Item getItem(int pos);
    int qtdItens();

    void salvar();
    void carregar(string nome);
};

#endif // PERSONAGEM_H
