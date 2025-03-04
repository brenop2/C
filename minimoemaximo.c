#include <stdio.h>
#include <limits.h>

int main() {
    printf("Tamanho do char: %d bits\n", CHAR_BIT);
    printf("Valor minimo de int: %d\n", INT_MIN);
    printf("Valor maximo de int: %d\n", INT_MAX);
    printf("Valor maximo de unsigned int: %u\n", UINT_MAX);
    printf("Valor minimo de long: %ld\n", LONG_MIN);
    printf("Valor maximo de long: %ld\n", LONG_MAX);
    printf("Valor maximo de unsigned long: %lu\n", ULONG_MAX);

    return 0;
}
