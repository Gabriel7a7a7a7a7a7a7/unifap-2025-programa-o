#include <stdio.h>

int main() {
    int sexo, countF = 0;
    float altura, maior = 0, menor = 1000, somaF = 0, somaTotal = 0;

    for (int i = 0; i < 50; i++) {
        printf("Sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);
        printf("Altura (cm): ");
        scanf("%f", &altura);

        if (altura > maior) maior = altura;
        if (altura < menor) menor = altura;

        if (sexo == 2) {
            somaF += altura;
            countF++;
        }

        somaTotal += altura;
    }

    printf("Maior altura: %.2f cm\n", maior);
    printf("Menor altura: %.2f cm\n", menor);
    if (countF > 0)
        printf("Média de altura das mulheres: %.2f cm\n", somaF / countF);
    else
        printf("Nenhuma mulher cadastrada.\n");
    printf("Média da turma: %.2f cm\n", somaTotal / 50);

    return 0;
}
