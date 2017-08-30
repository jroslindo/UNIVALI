/*
3.	Faça uma função que receba como parâmetros a data de nascimento de uma pessoa e a data atual e retorne a idade desta pessoa em anos (As datas devem ser recebidas em 3 variáveis inteiras para ano, mês e dia).
*/

#include <stdio.h>

int verIdade(int dia_atual, int mes_atual, int ano_atual, int dia_nasc, int mes_nasc, int ano_nasc); //Protótipo da função

int main(){
    int dia_atual, mes_atual, ano_atual;
    int dia_nasc, mes_nasc, ano_nasc;

    printf("Digite sua data de nascimento no formato 'DD MM AAAA': ");
    scanf("%d%d%d",&dia_nasc,&mes_nasc,&ano_nasc);

    printf("Digite a data atual no formato 'DD MM AAAA': ");
    scanf("%d%d%d",&dia_atual,&mes_atual,&ano_atual);

    printf("Idade da pessoa: %d",verIdade(dia_atual, mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc));

	return 0;
}

int verIdade(int dia_atual, int mes_atual, int ano_atual, int dia_nasc, int mes_nasc, int ano_nasc){
    if(mes_nasc < mes_atual || mes_nasc == mes_atual && dia_nasc <= dia_atual)
        return ano_atual - ano_nasc;
     else
        return ano_atual - ano_nasc -1;
}

