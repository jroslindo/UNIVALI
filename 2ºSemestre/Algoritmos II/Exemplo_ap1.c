
//Escreva um função que permita escrever na tela os valores existentes em uma estrtutura recebida como argumento

#include <stdio.h>

struct Data {
    int Dia,Mes,Ano;
};

struct pessoa
{
    char  Nome[100];
    int   Idade;
    float Salario;
    struct Data  Nasc;
};

void Mostrar (struct pessoa x)
{
    printf("Nome     : %s\n",x.Nome);
    printf("Idade    : %d\n",x.Idade);
    printf("Salario  : %.2f\n",x.Salario);
    printf("Dt. Nasc : %d/%d/%d\n",x.Nasc.Dia,x.Nasc.Mes,x.Nasc.Ano);
}

int main(){
    struct pessoa p = {"Carlos",23,12345.67,{23,5,1954}};

    Mostrar (p);
}

