#include <stdio.h>
#include <ctype.h>

void converterLetras(FILE *entrada, FILE *saida) {
    char c;

    // Leitura do arquivo caractere por caractere
    while ((c = fgetc(entrada)) != EOF) {
        fputc(toupper(c), saida);  // Converte a letra para maiúscula e grava no arquivo de saída
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <arquivo_entrada> <arquivo_saida>\n", argv[0]);
        return 1;
    }

    FILE *entrada = fopen(argv[1], "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    FILE *saida = fopen(argv[2], "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(entrada);
        return 1;
    }

    converterLetras(entrada, saida);

    fclose(entrada);
    fclose(saida);
    return 0;
}
