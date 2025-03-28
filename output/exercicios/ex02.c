#include <stdio.h>

int main() {
    char arr[] = "one";  // String correta

    for (int i = 0; i < 3; i++) {  // Percorre cada caractere da string
        getchar();  // Aguarda o usuário pressionar ENTER
        printf("%c", arr[i]);  // Imprime um caractere por vez
    }

    return 0;
}
