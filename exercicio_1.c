#include<stdio.h>
int main()
{
 int numero1, numero2, resultadosoma, resultadosub, resultadodivi, resultadomulti;

 printf("Digite o primeiro numero: \n");
 scanf("%d" , &numero1);

 printf("Digite o segundo numero :");
 scanf("%d", &numero2);

resultadosoma = numero1 + numero2;
resultadodivi = numero1 / numero2;
resultadomulti = numero1 * numero2;
resultadosub = numero1 - numero2;



printf("A soma e : %d \n", resultadosoma);
printf("A divisao e : %d \n", resultadodivi);
printf("A multiplicacao e : %d\n ", resultadomulti);
printf("A subtracao e : %d", resultadosub);

}
