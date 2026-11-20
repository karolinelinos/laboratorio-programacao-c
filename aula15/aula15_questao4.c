#include <stdio.h>

int main() {

    int matriz[3][3] = {
        {12, 45, 7},
        {33, 89, 21},
        {56, 4, 70}
    };
    int i, j;
    int maior = matriz[0][0];  

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor armazenado é: %d\n", maior);

    return 0;
}