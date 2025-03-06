#include <stdio.h> // biblioteca de entreda e saida

int main () { // essa função no final vai retornar um numero inteiro.
    double num1, num2, result; // variaveis vazias sendo criadas como tipo double/ponto flutuante.
    char operador; // criando uma variavel que aceita somente uma string/palavra.

    printf("Digite um numero: "); // printa para usuario digitar um valor e não precisa colocar \n porque/why scanf separa a proxima linha.
    scanf("%lf",&num1); // pede para o usuario colocar um numero %lf serve para indicar ao scanf que é uma variavel do tipo doble ponto flutuante.

    printf("Digite outro numero: ");
    scanf("%lf",&num2); // %lf double ponto flutuante,, & = serve para indicar aonde esta essa variavel dentro da memoria.

    printf("Digite um operador: (*,/,+,-)");
    scanf(" %c", &operador);

    switch (operador) { // switch serve para identificar as seguencias caso solicite algo
        case '*': // caso o usuario escolha o operador de multiplicação
            result = num1 * num2; // variavel resultado é multiplicação de n1 e n2
            printf("result: %.2lf", result); break; // toda vez que você terminar uma logica use break
        case '/':
            result = num1 / num2;
            printf("result: %.2lf", result); break;
        case '+':
            result = num1 + num2;
            printf("result: %.2lf", result); break;
        case '-':
            result = num1 - num2;
            printf("result: %.2lf", result); break;
        default: // para terminar a logica de switch tem que colocar default ao final da logica mesma logica de else..
            printf("Operador invalido");
    }

    return 0;

}