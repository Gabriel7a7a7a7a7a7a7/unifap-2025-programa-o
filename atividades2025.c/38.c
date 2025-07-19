#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    unsigned long long produto = 1;

    for (int i = 92; i <= 1478; i++) {
        if (ehPrimo(i)) {
            produto *= i;
        }
    }

    printf("Produto dos primos entre 92 e 1478: %llu\n", produto);
    return 0;
}
