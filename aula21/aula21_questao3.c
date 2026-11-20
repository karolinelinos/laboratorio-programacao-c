#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    int quantidade, i;

    printf("Quantos funcionarios deseja cadastrar agora (1 a 5)? ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Informe um valor de 1 a 5.\n");
        return 0;
    }

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}