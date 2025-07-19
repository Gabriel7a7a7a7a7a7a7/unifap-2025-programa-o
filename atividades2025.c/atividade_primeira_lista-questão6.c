#include <stdio.h>

int main() {
    int B, L, A;

    // Entrada com validação
    do {
        printf("Digite a largura da base (ímpar ≥ 3): ");
        scanf("%d", &B);
    } while (B < 3 || B % 2 == 0);

    do {
        printf("Digite a largura do tronco (ímpar ≤ B/2): ");
        scanf("%d", &L);
    } while (L < 1 || L % 2 == 0 || L > B / 2);

    do {
        printf("Digite a altura do tronco (2 ≤ A ≤ B/2): ");
        scanf("%d", &A);
    } while (A < 2 || A > B / 2);

    // Parte da copa (triângulo)
    for (int i = 1; i <= B; i += 2) {
        for (int e = 0; e < (B - i) / 2; e++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Parte do tronco
    int espacos = (B - L) / 2;
    for (int i = 0; i < A; i++) {
        for (int e = 0; e < espacos; e++)
            printf(" ");
        for (int j = 0; j < L; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
