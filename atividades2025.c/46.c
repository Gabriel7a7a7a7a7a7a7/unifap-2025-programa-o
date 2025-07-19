#include <stdio.h>
#include <string.h>

int main() {
    int idade, maiorIdade = 0, contMulheres = 0;
    char sexo, olhos[10], cabelo[10];

    for (int i = 0; i < 500; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Sexo (M/F): "); scanf(" %c", &sexo);
        printf("Olhos (A/V/C): "); scanf("%s", olhos);
        printf("Cabelos (L/C/P): "); scanf("%s", cabelo);
        printf("Idade: "); scanf("%d", &idade);

        if (idade > maiorIdade)
            maiorIdade = idade;

        if ((sexo == 'F' || sexo == 'f') &&
            idade >= 18 && idade <= 35 &&
            (strcmp(olhos, "V") == 0 || strcmp(olhos, "v") == 0) &&
            (strcmp(cabelo, "L") == 0 || strcmp(cabelo, "l") == 0)) {
            contMulheres++;
        }
    }

    printf("Maior idade: %d\n", maiorIdade);
    printf("Mulheres 18–35 com olhos verdes e cabelos louros: %d\n", contMulheres);

    return 0;
}
