#include <stdio.h>

int main() {

    int matriz[2][3];
    int i, j;
    int soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos é: %d\n", soma);

    return 0;
}