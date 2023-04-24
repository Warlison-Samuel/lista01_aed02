#include<stdio.h>
#include<stdlib.h>
#include "header/questao07.h"


void entrada07(float *raio){
	printf("\n QUESTAO 07\n");
	
  printf("Qual o tamanho do raio do circulo em centimetros? ");
  scanf("%f",raio);
}

void processamento07(float *raio, float *diametro, float *circunferencia, float *area, float *volume){
  *diametro = *raio * 2;
  *area = 3.14 * *raio * *raio;
  *circunferencia = 2 * 3.14 * *raio;
  *volume = (4.0/3.0) * 3.14 * *raio * *raio * *raio;
}

void saida07(float diametro, float circunferencia, float area, float volume){
  printf("O circulo possui:\nDiametro = %.1fcentimentros\narea = : %.1fcentimetros quadrados\n",diametro, area);
  printf("Circunferencia: %.1fcm\n\nA sua esfera tem %.1fcentimentros cubicos de volume\n", circunferencia, volume);
}

void questao07 (void){
  //Declaração de variáveis
  float r, diametro, perimetro, vol, area;

  //Entrada dos dados
  entrada07 (&r);

  //Processamento
  processamento07(&r, &diametro, &perimetro, &area, &vol);

  //Saída dos dados
  saida07(diametro, perimetro, area, vol);
}
