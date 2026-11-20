#include <stdio.h>
#include <string.h>

int main() {
    char produto[50];
    char categoria[20];
    char descricaoCategoria[40];
    char copia[50];
    char descricao[100];
    int tamanho;

    printf("Digite o nome do produto: ");
    scanf(" %49[^\n]", produto);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    tamanho = strlen(produto);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(descricaoCategoria, "Componente interno do computador");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(descricaoCategoria, "Dispositivo externo");
    } else {
        printf("\nCategoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 0;
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO DO CADASTRO =====\n");
    printf("Nome: %s\n", produto);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Categoria: %s (%s)\n", categoria, descricaoCategoria);
    printf("Copia do nome: %s\n", copia);
    printf("Descricao: %s\n", descricao);

    return 0;
}