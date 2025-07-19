#include <stdio.h>

int main() {
    int sexo, idade, countM = 0, countF = 0, entre18e35 = 0;
    float altura, somaIdade = 0, somaAlturaF = 0, somaIdadeM = 0;

    for (int i = 0; i < 1000; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Sexo (0-Feminino, 1-Masculino): "); scanf("%d", &sexo);
        printf("Idade: "); scanf("%d", &idade);
        printf("Altura: "); scanf("%f", &altura);

        somaIdade += idade;

        if (sexo == 0) {
            somaAlturaF += altura;
            countF++;
        } else if (sexo == 1) {
            somaIdadeM += idade;
            countM++;
        }

        if (idade >= 18 && idade <= 35) entre18e35++;
    }

    printf("Média de idade do grupo: %.2f\n", somaIdade / 1000);
    printf("Média da altura das mulheres: %.2f\n", countF > 0 ? somaAlturaF / countF : 0);
    printf("Média da idade dos homens: %.2f\n", countM > 0 ? somaIdadeM / countM : 0);
    printf("Percentual com idade entre 18 e 35: %.2f%%\n", 100.0 * entre18e35 / 1000);

    return 0;
}
