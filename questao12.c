#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header/questao12.h"

void entrada12(float *n1,float *n2){
	printf("\n QUESTAO 12\n");
	
    printf("Digite a primeira nota do aluno: ");
    scanf("%f",n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f",n2);
}

void processamento12(float *n1,float *n2,float *media){
    *media= (*n1 + *n2)/2.0;
}

void saida12(float media){
    printf("A media final do aluno ficou:  %.1f\n",media);
    if (media>=7.0){
        printf("PARABENS, voce esta APROVADO!\n");
    }else{
        printf("VIXII, voce esta REPROVADO!\nTENTA ANO QUE VEM DE NOVO, RLX!!\n");
    }
}
void questao12(void){
    //Declaração de variáveis
    float nota1,nota2,media;

    //Entrada dos dados
    entrada12(&nota1,&nota2);

    //Processamento
    processamento12(&nota1,&nota2,&media);

    //Saída dos dados
    saida12(media);
}
