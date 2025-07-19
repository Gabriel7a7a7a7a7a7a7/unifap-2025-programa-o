#include <stdio.h>

int main() {
    int n, a1, r, soma = 0;

    printf("Digite a quantidade de termos da PA: ");
    scanf("%d", &n);
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razão: ");
    scanf("%d", &r);

    printf("Termos da PA: ");
    for (int i = 0; i < n; i++) {
        int termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}
