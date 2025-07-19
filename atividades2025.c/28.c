#include <stdio.h>

int main() {
    int n;
    double S = 0.0;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);
        if (i < n) printf("+ ");
        S += 1.0 / i;
    }

    printf("\nValor final de S: %.10lf\n", S);
    return 0;
}
