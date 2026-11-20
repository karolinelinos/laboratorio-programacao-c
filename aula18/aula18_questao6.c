#include <stdio.h>

long calcularFatorial(int n) {
    long fatorial = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Numero invalido! Digite um valor entre 0 e 12.\n");
        return 0;
    }

    printf("O fatorial de %d e: %ld\n", numero, calcularFatorial(numero));

    return 0;
}