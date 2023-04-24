#include <stdio.h>
#include <stdlib.h>
#include "header/questao03.h"

void entrada03(float *n1, float *n2, int *p1, int *p2){
	printf("\n QUESTAO 03\n");
	
    //entrada
    printf("Digite a primeira Nota: ");
    scanf("%f", n1);
    printf("Digite a segunda Nota: ");
    scanf("%f", n2);
    printf("Digite o valor do peso da nota 1: ");
    scanf("%d", p1);
    printf("Digite o valor do peso da nota 2: ");
    scanf("%d", p2);
}

void processamento03(float *n1, float *n2, int *p1, int *p2, float *resultado){
    *resultado = (*n1 * *p1 + *n2 * *p2)/(*p1 + *p2);
}

void saida03(float resultado){
    printf("A media das notas eh: %.1f\n", resultado);
}

void questao03(void){
    //declaração
    float n1, n2, resultado;
    int p1, p2;

    //entrada
    entrada03(&n1, &n2, &p1, &p2);

    //processamento
    processamento03(&n1, &n2, &p1, &p2, &resultado);

    //saída
    saida03(resultado);
}
