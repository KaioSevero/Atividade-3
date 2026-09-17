#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC eh: %.2f\n", imc);
    printf("Classificacao: ");
    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Normal\n");
    else if (imc < 30)
        printf("Sobrepeso\n");
    else if (imc < 35)
        printf("Obesidade Grau I\n");
    else if (imc < 40)
        printf("Obesidade Grau II\n");
    else
        printf("Obesidade Grau III\n");
    return 0;
}
