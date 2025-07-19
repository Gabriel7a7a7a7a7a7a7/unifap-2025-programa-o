#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int N, M;

    printf("Quantos valores deseja digitar? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &M);

        int soma = (M * (M + 1)) / 2;
        unsigned long long fat = fatorial(M);

        printf("Valor: %d | Soma 1..%d: %d | Fatorial: %llu\n", M, M, soma, fat);
    }

    return 0;
}
