#include <stdio.h>

// Função para calcular o binômio de Newton (nCr)
int binomial(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int n;

    printf("Digite a altura do Triângulo de Pascal: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // espaços à esquerda
        for (int s = 0; s < n - i - 1; s++) {
            printf("  ");
        }

        // valores do triângulo
        for (int j = 0; j <= i; j++) {
            printf("%4d", binomial(i, j));
        }
        printf("\n");
    }

    return 0;
}
