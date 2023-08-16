#include<stdio.h>
int main(){

int num1, num2, num3;

printf("Digite o valor do produto : ");
scanf("%d", &num1);

printf("Digite o valor do frete desse produto : ");
scanf("%d", &num2);

num3 = num1 + num2;

printf("O valor da venda foi : %d", num3 );


printf("\n \n o valor de lucro foi :  %d", num3 );



}