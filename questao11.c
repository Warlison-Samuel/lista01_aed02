#include<stdio.h>
#include<stdlib.h>
#include"header/questao11.h"

void entrada11(float *numero){
	printf("\n QUESTAO 11\n");
	
    printf("Digite um numero qualquer: ");
    scanf("%f",numero);
}
void processamento11(float *numero){
    if (*numero >= 100 && *numero <=500){
        printf("Mano, esse numero ai ta entre 100 e 500!\n");
    }else{
	printf("Uffa, O numero nao esta entre 100 e 500\n");}
    
	}


void questao11(void){
    float numero;
    entrada11(&numero);
    processamento11(&numero);
}
