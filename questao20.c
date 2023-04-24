#include <stdio.h>
#include <stdlib.h>
#include "header/questao20.h"

void entrada20(float *numero1, float *numero2, float *numero3){
	printf("\n QUESTAO 20\n");
    printf("Digite um numero: ");
    scanf("%f", numero1);
    printf("Digita outro ai: ");
    scanf("%f", numero2);
    printf("So mais um: ");
    scanf("%f", numero3);
}

void processamento20(float *numero1, float *numero2, float *numero3, float *maior){

        if(*numero1 > *numero2 && *numero1> *numero3){
                *maior = *numero1;
        }
        else if(*numero2 > *numero1 && *numero2>*numero3){
            *maior=*numero2;
        }
        else if(*numero1 == *numero2 && *numero2 == *numero3){
            printf("Numeros identicos!\n");
        }
        else{
            *maior=*numero3;
        }

}

void saida20(float maior){
    printf("O numero %f eh o maior\n", maior);
}

void questao20(void){
    //Declaração de variáveis
    float numero1, numero2, numero3, maior;

    //Entrada de dados
    entrada20(&numero1, &numero2, &numero3);

    //Processamento dos dados
    processamento20(&numero1, &numero2, &numero3, &maior);

    //Saída de dados
    saida20(maior);
}


