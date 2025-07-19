#include <stdio.h>

int main() {
    int valor, soma = 0, count = 0;

    while (1) {
        printf("Digite um valor positivo (ou negativo para encerrar): ");
        scanf("%d", &valor);
        if (valor < 0) break;

        soma += valor;
        count++;
    }

    if (count > 0)
        printf("Média aritmética: %.2f\n", (float)soma / count);
    else
        printf("Nenhum valor válido foi inserido.\n");

    return 0;
}
