#include <stdio.h>

int main() {
    float salario, mediaSal = 0;
    int filhos, total = 0, totalFilhos = 0, ate100 = 0;
    float maiorSal = 0;

    printf("Digite o salário e o número de filhos (salário negativo encerra):\n");

    while (1) {
        printf("Salário: ");
        scanf("%f", &salario);
        if (salario < 0) break;

        printf("Número de filhos: ");
        scanf("%d", &filhos);

        total++;
        totalFilhos += filhos;
        mediaSal += salario;
        if (salario <= 100.0) ate100++;
        if (salario > maiorSal) maiorSal = salario;
    }

    if (total > 0) {
        printf("Média salarial: %.2f\n", mediaSal / total);
        printf("Média de filhos: %.2f\n", (float)totalFilhos / total);
        printf("Maior salário: %.2f\n", maiorSal);
        printf("Percentual com salário até R$100,00: %.2f%%\n", 100.0 * ate100 / total);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
