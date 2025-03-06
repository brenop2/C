#include <stdio.h>

int main() {
    int mtz[3][3];

    // Preenchendo a matriz com valores (exemplo: linha * coluna)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mtz[i][j] = i * j;  // Apenas um exemplo de preenchimento
        }
    }

    // Exibindo a matriz formatada com colchetes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", mtz[i][j]);  // Coloca cada número dentro de []
        }
        printf("\n");  // Quebra de linha para formatar a matriz
    }

    return 0;
}
