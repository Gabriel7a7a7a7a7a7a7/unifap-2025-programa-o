#include <stdio.h>

int main() {
    int n, soma;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    soma = 10 * n;

    printf("Resultado da soma de 10 repetido %d vezes: %d\n", n, soma);
    return 0;
}
