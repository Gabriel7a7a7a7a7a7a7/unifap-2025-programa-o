#include <stdio.h>

int main() {
    int num, soma = 0, count = 0;
    int pares = 0, somaPares = 0;

    printf("Digite números positivos (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        soma += num;
        count++;

        if (num % 2 == 0) {
            pares++;
            somaPares += num;
        }
    }

    if (count > 0) {
        printf("Quantidade de pares: %d\n", pares);
        printf("Média dos pares: %.2f\n", pares > 0 ? (float)somaPares / pares : 0);
        printf("Média geral: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum número lido.\n");
    }

    return 0;
}
