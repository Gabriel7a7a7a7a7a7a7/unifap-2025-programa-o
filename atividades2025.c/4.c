#include <stdio.h>

int main() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para Zé ser maior que Chico.\n", anos);
    return 0;
}
