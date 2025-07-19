#include <stdio.h>

int main() {
    int N;
    double E = 1.0;
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        double fatorial = 1.0;
        for (int j = 1; j <= i; j++)
            fatorial *= j;
        E += 1.0 / fatorial;
    }

    printf("Valor de E: %.10lf\n", E);
    return 0;
}
