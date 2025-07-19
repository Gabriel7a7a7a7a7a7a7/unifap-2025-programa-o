#include <stdio.h>
#include <string.h>

int main() {
    int altura;
    char tipo[10];

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    printf("Tipo (preenchido ou vazado): ");
    scanf("%s", tipo);

    if (strcmp(tipo, "preenchido") == 0) {
        for (int i = 1; i <= altura; i++) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("*\n");
        }
    } else if (strcmp(tipo, "vazado") == 0) {
        for (int i = 1; i <= altura; i++) {
            for (int j = 1; j <= i; j++) {
                if (j == 1 || j == i || i == altura)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("*\n");
        }
    } else {
        printf("Tipo inválido. Use 'preenchido' ou 'vazado'.\n");
    }

    return 0;
}
