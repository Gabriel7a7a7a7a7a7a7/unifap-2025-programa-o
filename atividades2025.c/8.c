#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0;

    printf("Digite números (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num % 2 == 0) {
            soma += num;
            qtd++;
        }
    }

    if (qtd > 0)
        printf("Média dos pares: %.2f\n", (float)soma / qtd);
    else
        printf("Nenhum número par foi digitado.\n");

    return 0;
}
