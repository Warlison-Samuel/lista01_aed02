#include <stdio.h>
#include <stdlib.h>
#include "header/questao01.h"

void entrada(int *num1, int *num2, int *num3){
	printf("\n QUESTAO 01 \n");
	
    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
    printf("digite o terceiro numero: ");
    scanf("%d", num3);
}

void processamento(int *num1, int *num2, int *num3, int *resultado){
    *resultado = *num1 + *num2 + *num3;
}

void saida(resultado){
    printf("a soma desses numeros eh = %d\n", resultado);
}

void questao01(void){
    //declaracao e variaveis
    int numero1, numero2, numero3, resultado;

    //entrada
    entrada(&numero1, &numero2, &numero3);

    //processamento
    processamento(&numero1, &numero2, &numero3, &resultado);

    //saida
    saida(resultado);
}
