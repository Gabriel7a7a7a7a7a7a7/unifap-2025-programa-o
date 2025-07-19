#include <stdio.h>

long long fatorial(int n) {
    long long fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int m;

    while (1) {
        printf("Digite um valor inteiro positivo (0 encerra): ");
        scanf("%d", &m);
        if (m <= 0) break;

        if (m % 2 == 0) {
            int divisores = 0;
            for (int i = 1; i <= m; i++)
                if (m % i == 0) divisores++;
            printf("O número %d tem %d divisores.\n", m, divisores);
        } else if (m < 10) {
            printf("Fatorial de %d é %lld\n", m, fatorial(m));
        } else {
            int soma = (m * (m + 1)) / 2;
            printf("Soma de 1 até %d é %d\n", m, soma);
        }
    }

    return 0;
}
