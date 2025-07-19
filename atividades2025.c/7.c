#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media;

    printf("Digite o código do aluno (0 para encerrar):\n");

    while (1) {
        printf("Código: ");
        scanf("%d", &codigo);
        if (codigo == 0) break;

        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        printf("Nota 3: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3.0;
        printf("Aluno %d - Média: %.2f\n", codigo, media);
    }

    return 0;
}
