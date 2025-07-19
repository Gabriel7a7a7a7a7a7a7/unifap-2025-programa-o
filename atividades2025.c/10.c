#include <stdio.h>

int main() {
    int cod;
    float n1, n2, n3, media;
    float maior;

    while (1) {
        printf("Digite o código do aluno: ");
        scanf("%d", &cod);
        if (cod < 0) break;

        printf("Digite as três notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        if (n1 >= n2 && n1 >= n3) {
            media = (n1 * 4 + n2 * 3 + n3 * 3) / 10.0;
        } else if (n2 >= n1 && n2 >= n3) {
            media = (n2 * 4 + n1 * 3 + n3 * 3) / 10.0;
        } else {
            media = (n3 * 4 + n1 * 3 + n2 * 3) / 10.0;
        }

        printf("Código: %d | Notas: %.1f %.1f %.1f | Média: %.2f - %s\n",
            cod, n1, n2, n3, media, (media >= 5.0) ? "APROVADO" : "REPROVADO");
    }

    return 0;
}
