#include <stdio.h>

int main() {
    int a, b;

    for (int i = 0; i < 5; i++) {
        printf("Digite o par %d (a < b):\n", i + 1);
        scanf("%d %d", &a, &b);

        if (a % 2 != 0) a++; // inicia no par mais próximo

        printf("Pares entre %d e %d:\n", a, b);
        for (int j = a; j <= b; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
