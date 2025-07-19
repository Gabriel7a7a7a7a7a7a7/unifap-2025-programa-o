#include <stdio.h>

int main() {
    int num, somaNegativos = 0;

    printf("Digite números inteiros (0 encerra):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num < 0) somaNegativos += num;
    }

    printf("Soma dos números negativos: %d\n", somaNegativos);
    return 0;
}
