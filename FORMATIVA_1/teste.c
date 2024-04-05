#include <stdio.h>

int main() {
    char caractere;
    int numero;

    printf("Digite um caractere maiúsculo seguido de um número (EOF para terminar):\n");

    while (scanf("%c%d", &caractere, &numero) != EOF) {
        printf("Caractere: %c\n", caractere);
        printf("Número: %d\n", numero);
    }

    return 0;
}
