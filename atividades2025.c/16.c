#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int contador = 0;

    printf("Digite valores (negativo para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%lf", &valor);
        if (valor < 0) break;

        if (contador % 20 == 0) {
            printf("\n%-10s %-10s %-10s %-10s\n", "Valor", "Quadrado", "Cubo", "Raiz");
        }

        printf("%-10.2lf %-10.2lf %-10.2lf %-10.2lf\n",
               valor, valor * valor, valor * valor * valor, sqrt(valor));

        contador++;
    }

    return 0;
}
