//Escreva um função que permita o carregamento da estrtutura através de uma função

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

void Ler (struct pessoa *prt){
    printf("Qual o Nome:");
    gets((*prt).Nome);
    printf("Qual a Idade:");
    scanf("%d",&(*prt).Idade);
    printf("Qual o Salário:");
    scanf("%d",&(*prt).Salario);
    printf("Qual a Data Nascim.:");
    scanf("%d %d %d",&(*prt).Nasc.Dia,&(*prt).Nasc.Mes,&(*prt).Nasc.Ano);

}

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
    puts("\n");
    Ler (&p);
    puts("\n");
    Mostrar (p);
}

