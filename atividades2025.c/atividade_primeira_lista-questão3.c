#include <stdio.h>

int main() {
    int largura;

    printf("Digite a largura central do losango (ímpar): ");
    scanf("%d", &largura);

    if (largura % 2 == 0 || largura < 1) {
        printf("A largura precisa ser um número ímpar positivo.\n");
        return 1;
    }

    int meio = (largura + 1) / 2;

    // Parte superior
    for (int i = 1; i <= largura; i += 2) {
        for (int e = 0; e < (largura - i) / 2; e++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("X");
        printf("\n");
    }

    // Parte inferior
    for (int i = largura - 2; i >= 1; i -= 2) {
        for (int e = 0; e < (largura - i) / 2; e++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}
