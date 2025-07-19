#include <stdio.h>
#include <string.h>

int main() {
    int codCidade, veiculos, acidentes, maiorIndice = -1, menorIndice = 1000000;
    char estado[3], cidadeMaior[20], cidadeMenor[20];
    int somaVeiculos = 0, totalRS = 0, somaAcidRS = 0;

    for (int i = 0; i < 200; i++) {
        printf("Cidade %d\n", i + 1);
        printf("Código: "); scanf("%d", &codCidade);
        printf("Estado (sigla): "); scanf("%s", estado);
        printf("Veículos de passeio: "); scanf("%d", &veiculos);
        printf("Acidentes com vítimas: "); scanf("%d", &acidentes);

        int indice = acidentes;

        if (indice > maiorIndice) {
            maiorIndice = indice;
            strcpy(cidadeMaior, estado);
        }

        if (indice < menorIndice) {
            menorIndice = indice;
            strcpy(cidadeMenor, estado);
        }

        somaVeiculos += veiculos;

        if (strcmp(estado, "RS") == 0) {
            totalRS++;
            somaAcidRS += acidentes;
        }
    }

    printf("Maior índice de acidentes: %d (%s)\n", maiorIndice, cidadeMaior);
    printf("Menor índice de acidentes: %d (%s)\n", menorIndice, cidadeMenor);
    printf("Média de veículos nas cidades: %.2f\n", somaVeiculos / 200.0);

    if (totalRS > 0)
        printf("Média de acidentes no RS: %.2f\n", somaAcidRS / (float)totalRS);
    else
        printf("Nenhuma cidade do RS registrada.\n");

    return 0;
}
