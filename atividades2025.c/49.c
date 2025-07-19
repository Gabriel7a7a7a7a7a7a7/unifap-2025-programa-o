#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    printf("Fatorial de %d é %llu\n", N, fatorial(N));
    return 0;
}
