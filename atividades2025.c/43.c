#include <stdio.h>

void ordenarDecrescente(int v[]) {
    int i, j, aux;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main() {
    int grupo[4];

    for (int i = 0; i < 5; i++) {
        printf("Grupo %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Valor %c: ", 'A' + j);
            scanf("%d", &grupo[j]);
        }

        printf("Ordem original: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }

        ordenarDecrescente(grupo);

        printf("\nOrdem decrescente: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }

        printf("\n\n");
    }

    return 0;
}
