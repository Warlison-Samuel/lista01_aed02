#include <stdio.h>
#include <stdlib.h>
#include "header/questao22.h"

void entrada22(int *habitantes, int *vencedor){	
    printf("Quantod eleitores tem do municipio? ");
    scanf("%d",habitantes);
    printf("Informe o numero de votos do candidato mais votado: ");
    scanf("%d",vencedor);
}

void processamento22(int *habitantes, int *vencedor, int *segundo){
    if (*vencedor >= (*habitantes /2.0)){
        *segundo = 1;
    }else{
        *segundo = 0;
    }
}

void saida22(int segundo){
    if (segundo == 1){
        printf("\nVitoria no primeiro Turno!\n");
    }else{
        printf("\nDecisao no segundo Turno!\n");
    }
}

void questao22(void){
    int pop,cand,turno;
    char nome[20];
	
	printf("\n QUESTAO 22\n");
    //Entrada
    printf("Informe o nome do municipio: ");
    scanf("%s",&nome);
    entrada22(&pop,&cand);

    //Processamento
    processamento22(&pop,&cand,&turno);

    //Saída
    saida22(turno);
}
