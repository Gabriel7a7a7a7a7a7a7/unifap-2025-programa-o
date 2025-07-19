#include <stdio.h>

int main() {
    int a, negativos = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &a);
        if (a < 0)
            negativos++;
    }
    printf("Quantidade de valores negativos: %d\n", negativos);
    return 0;
}
