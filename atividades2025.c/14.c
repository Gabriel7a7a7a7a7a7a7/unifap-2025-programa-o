#include <stdio.h>

int main() {
    int valor, positivos = 0, negativos = 0, total = 0;
    float soma = 0;

    printf("Digite os valores (0 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor == 0) break;

        soma += valor;
        total++;
        if (valor > 0) positivos++;
        else if (valor < 0) negativos++;
    }

    if (total > 0) {
        printf("Média: %.2f\n", soma / total);
        printf("Positivos: %d (%.2f%%)\n", positivos, 100.0 * positivos / total);
        printf("Negativos: %d (%.2f%%)\n", negativos, 100.0 * negativos / total);
    } else {
        printf("Nenhum valor lido.\n");
    }

    return 0;
}
