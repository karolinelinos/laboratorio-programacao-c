#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char descricaoPerfil[30];
    char confirmacao[50];
    char mensagem[100];
    int tamanho;

    printf("Digite o primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    tamanho = strlen(nome);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(descricaoPerfil, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(descricaoPerfil, "Usuario comum");
    } else {
        printf("\nPerfil invalido! Use ADMIN ou COMUM.\n");
        return 0;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Nome de confirmacao: %s\n", confirmacao);
    printf("Perfil: %s (%s)\n", perfil, descricaoPerfil);
    printf("\n%s\n", mensagem);

    return 0;
}