#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int N, valor;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        printf("Valor: %d | Fatorial: %llu\n", valor, fatorial(valor));
    }

    return 0;
}
