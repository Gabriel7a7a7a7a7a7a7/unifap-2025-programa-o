#include <stdio.h>

int main() {
    int num;
    long long produto = 1;
    int temPar = 0;

    printf("Digite números inteiros positivos (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num > 0 && num % 2 == 0) {
            produto *= num;
            temPar = 1;
        }
    }

    if (temPar)
        printf("Produto dos números pares: %lld\n", produto);
    else
        printf("Nenhum número par foi digitado.\n");

    return 0;
}
