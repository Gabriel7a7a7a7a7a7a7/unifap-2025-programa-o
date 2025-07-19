#include <stdio.h>

long long fatorial(int x) {
    long long fat = 1;
    for (int i = 2; i <= x; i++)
        fat *= i;
    return fat;
}

int main() {
    int n, valor;

    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        printf("Valor: %d | Fatorial: %lld\n", valor, fatorial(valor));
    }

    return 0;
}
