#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, comissao, salarioFinal;

    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    
    comissao = numCarrosVendidos * valorPorCarro;

    
    salarioFinal = salarioFixo + comissao + (0.05 * valorTotalVendas);

    
    printf("O salario final do vendedor e: %.2f\n", salarioFinal);

    
}