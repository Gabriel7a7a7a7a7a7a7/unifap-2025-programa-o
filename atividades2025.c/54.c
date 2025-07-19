#include <stdio.h>

int main() {
    float a, b;

    printf("Digite dois números distintos: ");
    scanf("%f %f", &a, &b);

    if (a == b) {
        printf("Os números devem ser diferentes.\n");
        return 1;
    }

    float menor = a < b ? a : b;
    float maior = a > b ? a : b;
    float intervalo = (maior - menor) / 3;

    printf("Divisões do intervalo:\n");
    printf("%.2f | %.2f | %.2f | %.2f\n", menor, menor + intervalo, menor + 2 * intervalo, maior);

    return 0;
}
