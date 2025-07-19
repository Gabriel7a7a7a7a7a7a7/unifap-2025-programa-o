#include <stdio.h>

int main() {
    float n1, n2, n3, media, somaTurma = 0;
    int i;

    for (i = 0; i < 50; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nota 1: "); scanf("%f", &n1);
        printf("Nota 2: "); scanf("%f", &n2);
        printf("Nota 3: "); scanf("%f", &n3);

        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10.0;
        somaTurma += media;

        printf("Média: %.2f - %s\n", media, media >= 7.0 ? "Aprovado" : "Reprovado");
    }

    printf("Média geral da turma: %.2f\n", somaTurma / 50);
    return 0;
}
