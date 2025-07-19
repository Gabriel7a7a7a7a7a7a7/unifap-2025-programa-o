#include <stdio.h>
#include <string.h>

int main() {
    int idade, maior = 0, cont = 0;
    char sexo, olhos[10], cabelo[10];

    while (1) {
        printf("Idade (-1 encerra): ");
        scanf("%d", &idade);
        if (idade == -1) break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (azuis, verdes, castanhos): ");
        scanf("%s", olhos);

        printf("Cor dos cabelos (louros, castanhos, pretos): ");
        scanf("%s", cabelo);

        if (idade > maior) maior = idade;

        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 18 && idade <= 35 &&
                strcmp(olhos, "verdes") == 0 &&
                strcmp(cabelo, "louros") == 0) {
                cont++;
            }
        }
    }

    printf("Maior idade: %d\n", maior);
    printf("Quantidade de mulheres 18–35 anos com olhos verdes e cabelos louros: %d\n", cont);

    return 0;
}
