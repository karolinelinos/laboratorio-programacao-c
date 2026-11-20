#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    }
    return p2;
}

int main() {
    float preco1, preco2, maior;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);

    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        maior = maiorPreco(preco1, preco2);
        printf("O maior preco e: R$ %.2f\n", maior);
    }

    return 0;
}