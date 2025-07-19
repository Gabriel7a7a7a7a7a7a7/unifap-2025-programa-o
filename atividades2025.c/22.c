#include <stdio.h>

int main() {
    int idade, sexo, mulheres100 = 0, total = 0;
    float salario, somaSalario = 0, maior = 0, menor = 1000;

    while (1) {
        printf("Idade (negativa encerra): ");
        scanf("%d", &idade);
        if (idade < 0) break;

        printf("Sexo (1-M, 2-F): ");
        scanf("%d", &sexo);
        printf("Salário: ");
        scanf("%f", &salario);

        somaSalario += salario;
        if (salario > maior) maior = salario;
        if (salario < menor) menor = salario;

        if (sexo == 2 && salario <= 100.0)
            mulheres100++;

        total++;
    }

    if (total > 0) {
        printf("Média salarial: %.2f\n", somaSalario / total);
        printf("Maior idade: %d\n", maior);
        printf("Menor idade: %d\n", menor);
        printf("Mulheres com salário até R$100: %d\n", mulheres100);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
