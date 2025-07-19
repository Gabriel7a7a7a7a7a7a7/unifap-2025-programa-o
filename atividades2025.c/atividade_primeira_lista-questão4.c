#include <stdio.h>
#include <string.h>

int main() {
    int altura;
    char tipo[10];

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("Tipo (preenchido ou vazado): ");
    scanf("%s", tipo);

    if (strcmp(tipo, "preenchido") == 0) {
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < altura; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else if (strcmp(tipo, "vazado") == 0) {
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < altura; j++) {
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    } else {
        printf("Tipo inválido. Use 'preenchido' ou 'vazado'.\n");
    }

    return 0;
}
