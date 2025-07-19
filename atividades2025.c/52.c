#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int n, p;
    printf("Digite N (total de elementos): ");
    scanf("%d", &n);
    printf("Digite P (subconjunto): ");
    scanf("%d", &p);

    if (p > n || n < 0 || p < 0) {
        printf("Valores inválidos.\n");
        return 1;
    }

    unsigned long long c = fatorial(n) / (fatorial(p) * fatorial(n - p));
    unsigned long long a = fatorial(n) / fatorial(n - p);

    printf("Combinação C(%d, %d) = %llu\n", n, p, c);
    printf("Arranjo A(%d, %d) = %llu\n", n, p, a);

    return 0;
}
