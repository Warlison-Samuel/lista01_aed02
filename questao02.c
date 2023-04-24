#include <stdio.h>
#include <stdlib.h>
#include "header/questao02.h"

void entrada02(float *num1, float *num2, float *num3, float *num4){
    printf("\n QUESTAO 02 \n" );
    
	//entrada
    printf("Digite um numero: ");
    scanf("%f", num1);
    printf("Digite outro numero: ");
    scanf("%f", num2);
    printf("Digite mais um: ");
    scanf("%f", num3);
    printf("Dessa vez eh o ultimo, digita ai: ");
    scanf("%f", num4);
}

void processamento02(float *num1, float *num2, float *num3, float *num4, float *resultado){
    *resultado = (*num1 + *num2 + *num3 + *num4)/4;
}

void saida02(float resultado){
    printf("A media dos numero eh: %.1f\n", resultado);
}

void questao02(void){
    //declaração
    float num1, num2, num3, num4, resultado;

    //entrada
    entrada02(&num1, &num2, &num3, &num4);

    //processamento
    processamento02(&num1, &num2, &num3, &num4, &resultado);

    //saída
    saida02(resultado);
}
