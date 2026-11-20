#include <stdio.h>

int main() {

    int matriz[3][3] = {
        {2, 7, 4},
        {9, 6, 11},
        {8, 5, 10}
    };
    int i, j;
    int pares = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}