#include <stdio.h>

int main() {
    char palavra[50];
    int i;
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra tem %d letras.\n", contador);

    return 0;
}