#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    float altura;
    char cpf[20];

    // Pergunta o nome
    printf("Qual seu nome: ");
    scanf("%s", nome);  // Não precisa de & para o nome, já é um ponteiro

    // Pergunta a idade
    printf("Qual sua idade: ");
    scanf("%d", &idade);  // Aqui o & é necessário porque idade é uma variável simples

    // Pergunta a altura
    printf("Qual sua altura: ");
    scanf("%f", &altura);  // Também precisamos passar o endereço de memória com o &

    // Pergunta o CPF
    printf("Qual seu CPF: ");
    scanf("%s", cpf);  // Novamente, cpf é um ponteiro

    // Exibe as informações
    printf("Seu nome é: %s\n", nome);  // Usar %s para strings
    printf("Sua idade é: %d\n", idade);  // Usar %d para inteiros
    printf("Sua altura é: %.2f\n", altura);  // Usar %.2f para controlar a precisão de floats
    printf("Seu CPF é: %s\n", cpf);  // Usar %s para strings

    return 0;
}
