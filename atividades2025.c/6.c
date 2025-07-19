#include <stdio.h>

int main() {
    int voto;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;

    printf("Digite os votos (0 para encerrar):\n");

    while (1) {
        scanf("%d", &voto);
        if (voto == 0) break;

        switch (voto) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default: printf("Voto inválido!\n");
        }
    }

    printf("Candidato 1: %d\n", c1);
    printf("Candidato 2: %d\n", c2);
    printf("Candidato 3: %d\n", c3);
    printf("Candidato 4: %d\n", c4);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);

    return 0;
}
