#include <stdio.h>
#include <stdlib.h>
#include "header/questao08.h"

void entrada08(float *km){
	printf("\n QUESTAO 08\n");
	
  printf("Qual velocidade o veiculo esta? (digite em km/h): ");
  scanf("%f", km);
}

void processamento08(float *km, float *m){
  *m = *km / 3.6;
}

void saida08(float m){
  printf("A mesma velocidade em m/s eh: %.2fm/s\n",m);
}

void questao08 (void){
  //Declaração de variáveis
  float km, ms;

  //Entrada
  entrada08(&km);

  //Processamento
  processamento08(&km,&ms);

  //Saída
  saida08(ms);
}
