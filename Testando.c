#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    // Solicitar os operandos e o operador
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);  // O espaço antes de %c é para consumir qualquer caractere de nova linha pendente

    // Usando o switch para decidir a operação
    switch (operador) {
        case '+':
            resultado = num1 + num2;
        printf("Resultado: %.2lf\n", resultado);
        break;

        case '-':
            resultado = num1 - num2;
        printf("Resultado: %.2lf\n", resultado);
        break;

        case '*':
            resultado = num1 * num2;
        printf("Resultado: %.2lf\n", resultado);
        break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
        break;

        default:
            printf("Operador inválido! Use +, -, * ou /\n");
    }

    return 0;
}
