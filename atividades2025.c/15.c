#include <stdio.h>

int main() {
    int valor, i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    printf("Digite valores (número negativo encerra):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor < 0) break;

        if (valor <= 25) i1++;
        else if (valor <= 50) i2++;
        else if (valor <= 75) i3++;
        else if (valor <= 100) i4++;
    }

    printf("[0-25]: %d\n[26-50]: %d\n[51-75]: %d\n[76-100]: %d\n", i1, i2, i3, i4);

    return 0;
}
