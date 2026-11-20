#include <stdio.h>

int main() {

    char nome[100];

    printf("Digite seu nome completo: ");
    scanf(" %99[^\n]", nome);   

    printf("Nome completo: %s\n", nome);

    return 0;
}