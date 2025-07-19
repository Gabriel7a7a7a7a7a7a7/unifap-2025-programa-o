#include <stdio.h>
#include <math.h>

int main() {
    double X;

    printf("Digite o valor de X: ");
    scanf("%lf", &X);

    if (X == 0) {
        printf("Divisão por zero não permitida.\n");
        return 1;
    }

    printf("20 primeiros termos da série:\n");
    for (int i = 1; i <= 20; i++) {
        double termo = 1.0 / pow(X, i);
        printf("1/%.0lf^%d = %.10lf\n", X, i, termo);
    }

    return 0;
}
