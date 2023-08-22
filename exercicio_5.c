#include<stdio.h>
int main(){

float custo, valorfrete ,despesas , valorvenda, valorbruto, lucro, porcetangemlucro;

printf("\n Digite o valor de custo da mercadoria:");
scanf("%f", &custo);
printf("\n Digite o valor de frete da mercadoria:");
scanf("%f", &valorfrete);
printf("\n Digite o valor das despesas:");
scanf("%f", &despesas);
printf(" Digite o valor da venda:");
scanf("%f", &valorvenda);

valorbruto = custo +valorfrete +despesas;

porcetangemlucro= (lucro/valorbruto) * 100;
 printf("a porcetangem de lucro e : %.2f%%" , lucro);




}