#include <stdio.h>
#include <stdlib.h>
#include "header/questao09.h"

void entrada09(float *numero){
	printf("\n QUESTAO 09\n");
	
  printf("Por gentileza, digita um numero ai: ");
  scanf("%f", numero);
}

void processamento09(float *numero){
  if(*numero>=100){
    printf("NAO MUITO GRANDE TMBEM NE!!! esse numero eh maior que 100\n");
  }
  else{
  printf("valeu mano, ta de boa esse numero ai!");
  }
}


void questao09 (void){
  //Declaracao de variaveis
  float numero;

  //Entrada
  entrada09(&numero);

  //Processamento
  processamento09(&numero);

}
