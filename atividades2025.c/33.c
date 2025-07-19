#include <stdio.h>

int main() {
    int N;

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d para a tabuada: ", i + 1);
        scanf("%d", &N);

        printf("Tabuada de %d:\n", N);
        for (int j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }
        printf("\n");
    }

    return 0;
}
