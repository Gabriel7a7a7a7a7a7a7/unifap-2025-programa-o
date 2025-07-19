#include <stdio.h>

long long potencia(int x, int y) {
    long long resultado = 1;
    for (int i = 0; i < y; i++)
        resultado *= x;
    return resultado;
}

int main() {
    int x, y;

    printf("Digite a base X: ");
    scanf("%d", &x);
    printf("Digite o expoente Y: ");
    scanf("%d", &y);

    printf("%d elevado a %d é %lld\n", x, y, potencia(x, y));
    return 0;
}
