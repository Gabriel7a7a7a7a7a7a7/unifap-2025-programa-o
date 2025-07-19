#include <stdio.h>

int main() {
    int N;

    // Entrada com validação
    do {
        printf("Digite o valor de N (>= 2): ");
        scanf("%d", &N);
    } while (N < 2);

    // Imprime cada linha
    for (int i = 1; i <= N; i++) {
        // Espaços (para centralizar)
        for (int e = 0; e < N - i; e++) {
            printf("  ");
        }

        // Parte crescente
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Parte decrescente
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
