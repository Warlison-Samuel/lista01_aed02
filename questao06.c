#include<stdio.h>
#include<stdlib.h>
#include"header/questao06.h"

void entrada06(float *preco1,float *preco2){
	printf("\n QUESTAO 06\n");
	
    printf("Qual o antigo valor do produto: R$");
    scanf("%f",preco1);
    printf("Informe o novo valor do produto: R$");
    scanf("%f",preco2);
}

void processamento06(float *preco1, float *preco2, float *saida){
    *saida = ((*preco2 - *preco1) / *preco1) * 100.0;
}

void saida06(float saida){
    printf("O valor aumentou em %.2f%%\n",saida);
}

void questao06(void){
    //Declaracaoo de variaveis
    float precoAnt,precoNovo,aumento;

    //Entrada dos dados
    entrada06(&precoAnt,&precoNovo);

    //Processamento dos dados
    processamento06(&precoAnt,&precoNovo,&aumento);

    //Saida dos dados
    saida06(aumento);
}
