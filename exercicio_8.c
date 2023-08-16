int main() {
    
    float salario_atual, percentual_reajuste, novo_salario;


    printf("Digite o salario mensal atual do funcionario: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);

    
    float aumento = salario_atual * (percentual_reajuste / 100);
    novo_salario = salario_atual + aumento;


    printf("O novo salário e: %.2f\n", novo_salario);

}