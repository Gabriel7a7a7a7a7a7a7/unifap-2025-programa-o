#include <stdio.h>

int main() {
    int matricula;
    float nota;
    char conceito;

    for (int i = 0; i < 75; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &matricula);
        printf("Nota final: ");
        scanf("%f", &nota);

        if (nota >= 0 && nota <= 4.9)
            conceito = 'D';
        else if (nota <= 6.9)
            conceito = 'C';
        else if (nota <= 8.9)
            conceito = 'B';
        else
            conceito = 'A';

        printf("Aluno %d | Nota: %.1f | Conceito: %c\n\n", matricula, nota, conceito);
    }

    return 0;
}
