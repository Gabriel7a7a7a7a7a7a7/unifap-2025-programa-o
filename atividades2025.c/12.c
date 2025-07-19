#include <stdio.h>

int main() {
    int n;

    for (int i = 0; i < 20; i++) {
        printf("Digite um valor para gerar a tabuada: ");
        scanf("%d", &n);

        printf("Tabuada de %d:\n", n);
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("\n");
    }

    return 0;
}
