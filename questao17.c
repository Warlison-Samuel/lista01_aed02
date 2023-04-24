#include <stdio.h>
#include <stdlib.h>
#include "header/questao17.h"

void entrada17(float *preco){
	printf("\n QUESTAO 17 \n");
    printf("Digite o valor de compra do produto: R$");
    scanf("%f",preco);
}

void processamento17(float *preco){
    if (*preco >= 200){
        *preco = *preco * 1.3;
    }else{
        *preco = *preco * 1.5;
    }
}

void saida17(float preco){
    printf("O preco de venda deve ser = R$%.2f \n",preco);
}

void questao17(void){
    //Declaração de variáveis
    float valor;

    //Entrada de dados
    entrada17(&valor);

    //Processamento dos dados
    processamento17(&valor);

    //Saída de dados
    saida17(valor);
}
