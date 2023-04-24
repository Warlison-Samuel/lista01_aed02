#include <stdio.h>
#include <stdlib.h>
#include "header/questao18.h"

void entrada18(float *nota1,float *nota2){
	printf("\n QUESTAO 18\n");
    printf("Tirou quanto na primeira prova? ");
    scanf("%f",nota1);
    printf("Tirou quanto na segunda prova? ");
    scanf("%f",nota2);
}

void processamento18(float *nota1,float *nota2,float *media,int *aprovacao){
    *media = (*nota1 + *nota2) / 2.0;
    if (*media >= 7){
        *aprovacao = 1;
    }else if (*media < 3){
        *aprovacao = 2;
    }else{
        *aprovacao = 3;
    }
}

void saida18(float media, int aprovacao){
    printf("Sua media ficou: %.1f.  ",media);
    if(aprovacao == 1){
        printf("BOAA MLKOTE, APROVADO!\n");
    }else if (aprovacao == 2){
        printf("REPROVADO! So ano que vem agora ;( \n");
    }else{
        printf("ESTUDA PRA PROVA FINAL\n");
    }
}

void questao18(void){
    //Declaração de variáveis
    float nota1,nota2,media;
    int aprovacao;

    //Entrada dos dados
    entrada18(&nota1,&nota2);

    //Processamento dos dados
    processamento18(&nota1,&nota2,&media,&aprovacao);

    //Saída dos dados
    saida18(media,aprovacao);
}
