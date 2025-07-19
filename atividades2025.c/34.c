#include <stdio.h>

int main() {
    int numAluno, maisAlto, maisBaixo;
    float altura, altMax = 0, altMin = 1000;

    for (int i = 0; i < 5; i++) {
        printf("Digite o número do aluno: ");
        scanf("%d", &numAluno);
        printf("Digite a altura (cm): ");
        scanf("%f", &altura);

        if (altura > altMax) {
            altMax = altura;
            maisAlto = numAluno;
        }
        if (altura < altMin) {
            altMin = altura;
            maisBaixo = numAluno;
        }
    }

    printf("Mais alto: Aluno %d com %.2f cm\n", maisAlto, altMax);
    printf("Mais baixo: Aluno %d com %.2f cm\n", maisBaixo, altMin);

    return 0;
}
