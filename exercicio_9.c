#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    const float percentualDistribuidor = 0.28; 
    const float percentualImpostos = 0.45;     

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

   
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    printf("O custo final ao consumidor e: %.2f\n", custoConsumidor);

    
}