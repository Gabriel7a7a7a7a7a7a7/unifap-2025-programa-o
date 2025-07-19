#include <stdio.h>
#include <limits.h>

int main() {
    int num, maior = INT_MIN, menor = INT_MAX;

    for (int i = 0; i < 50; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &num);

        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
