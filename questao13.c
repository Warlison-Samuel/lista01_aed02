#include <stdio.h>
#include <stdlib.h>
#include "header/questao13.h"

void entrada13(int *numero){
	printf("\n QUESTAO 13\n");
	
    printf("Digite um numero para saber se ele eh divisivel por 5 ou nao: ");
    scanf("%d",numero);
}

void processamento13(int *numero,int *divisivel){
    if (*numero % 5 == 0){
        *divisivel = 1;
    }else{
        *divisivel = 0;
    }
}

void saida13(int divisivel){
    if (divisivel == 1){
        printf("Divisivel por 5 \n");
    } else{
        printf("Nao divisivel por 5 \n");
    }


}

void questao13(void){
    //Declaração de variáveis
    int numero, div;

    //Entrada dos dados
    entrada13(&numero);

    //Processamento dos dados
    processamento13(&numero,&div);

    //Saída dos dados
    saida13(div);
}
