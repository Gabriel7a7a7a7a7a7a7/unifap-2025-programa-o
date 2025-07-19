#include <stdio.h>
#include <limits.h>

int main() {
    int num, maior = INT_MIN, menor = INT_MAX;
    long long soma = 0;

    for (int i = 0; i < 500; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &num);

        soma += num;
        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", (float)soma / 500);

    return 0;
}
