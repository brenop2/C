#include <stdio.h>

int main() {
    char nome[10] = "breno"; // Vetor maior para evitar problemas; quando estamos fazendo uma variavel tipo string [delimita valor}

    printf("Seu nome inicial e: %s\n", nome); // o indetificador sempre tem que ser apos a frase

    printf("\nQual e seu nome? ");
    scanf("%s", nome); // Sem "&" porque nome já é um array

    printf("Seu nome final e: %s\n", nome);

    return 0;
}
