#include <stdio.h>
#include <stdlib.h>
#include "header/questao14.h"

void entrada14(int *numero){
	printf("\n QUESTAO 14\n");
    printf("Digite um numero para saber se eh par ou impar: ");
    scanf("%d",numero);
}

void processamento14(int *numero, int *resto){
    if (*numero % 2 == 0){
        *resto = 0;
    } else {
        *resto=1;
    }

}

void saida14(int resto){
    if (resto == 0){
        printf("Par!\n");
    }else{
        printf("Impar!\n");
    }
}

void questao14(void){
    //Declaracao de variaveis
    int numero, resto;

    //Entrada de dados
    entrada14(&numero);

    //Processamento dos dados
    processamento14(&numero,&resto);

    //Saida de dados
    saida14(resto);
}
