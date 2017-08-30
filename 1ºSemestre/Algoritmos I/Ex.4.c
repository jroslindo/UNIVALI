/*
4.	Faça um programa que solicita a data de nascimento de uma pessoa e a data atual e exiba a idade desta pessoa em anos (A data deve ser armazenada em 3 variáveis inteiras para ano, mês e dia).
*/

#include <stdio.h>

int main()
{
    int dia_atual, mes_atual, ano_atual;
    int dia_nasc, mes_nasc, ano_nasc;

    printf("Digite sua data de nascimento no formato 'DD MM AAAA': ");
    scanf("%d%d%d",&dia_nasc,&mes_nasc,&ano_nasc);

    printf("Digite a data atual no formato 'DD MM AAAA': ");
    scanf("%d%d%d",&dia_atual,&mes_atual,&ano_atual);

    if(mes_nasc < mes_atual || mes_nasc == mes_atual && dia_nasc <= dia_atual){
        printf("Idade da pessoa: %d",ano_atual - ano_nasc);
    } else {
        printf("Idade da pessoa: %d",ano_atual - ano_nasc -1);
    }
	return 0;
}

