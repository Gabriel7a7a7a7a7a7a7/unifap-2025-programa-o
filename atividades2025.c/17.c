#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        printf("Digite M e N (valores inteiros e positivos, 0 encerra): ");
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) break;

        int soma = 0;
        for (int i = 0; i < n; i++)
            soma += m + i;

        printf("Soma de %d inteiros a partir de %d: %d\n", n, m, soma);
    }

    return 0;
}
