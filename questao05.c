#include <stdio.h>
#include <stdlib.h>
#include "header/questao05.h"

void entrada05(float *salarioBase, int *dependentes){
	printf("\n QUESTAO 05\n");
	
    //entrada
    printf("qual valor do salario base? ");
    scanf("%f", salarioBase);
    printf("quantos dependetes voce tem?: ");
    scanf("%d", dependentes);
}

void processamento05(float *salarioBase, float *salarioBruto, int *dependentes){
    *salarioBruto = *salarioBase + (*dependentes * 32);
    *salarioBruto = *salarioBruto - ((*salarioBruto*27.50)/100);

}

void saida05(float salarioBruto){
    printf("salario final com adicionais e descontos fica : %.1f\n", salarioBruto);
}

void questao05(void){
    //declaracao
    float salarioBase, salarioBruto;
    int dependentes;

    //entrada
    entrada05(&salarioBase, &dependentes);

    //processamento
    processamento05(&salarioBase, &salarioBruto, &dependentes);

    //saida
    saida05(salarioBruto);
}
