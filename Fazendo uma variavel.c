#include <stdio.h>


int main() { //Assim que se faz uma variavel em c
    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê um número inteiro e armazena em 'idade'

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura); // Lê um número decimal e armazena em 'altura'

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
