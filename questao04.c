#include <stdio.h>
#include <stdlib.h>
#include "header/questao04.h"

void entrada04(float *salarioInicial, float *porcentagem){
	printf("\n QUESTAO 04\n");
	
    //entrada
    printf("Digite o valor do salario Inical ");
    scanf("%f", salarioInicial);
    printf("Qual porcentagem que esse salario vai aumentar? ");
    scanf("%f", porcentagem);
}

void processamento04(float *salarioInicial, float *porcentagem, float *salarioFinal){
    *salarioFinal = *salarioInicial + (*salarioInicial * *porcentagem / 100);
}

void saida04(float salarioFinal){
    printf("O salario com aumento fica: %.1f\n", salarioFinal);
}

void questao04(void){
    //declaracao
    float salarioInicial, salarioFinal, porcentagem;


    //entrada
    entrada04(&salarioInicial, &porcentagem);

    //processamento
    processamento04(&salarioInicial, &porcentagem, &salarioFinal);

    //saida
    saida04(salarioFinal);
}
