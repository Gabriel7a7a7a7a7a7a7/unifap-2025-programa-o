#include <stdio.h>

int main() {
    char nome[50];
    float compras, bonus;

    for (int i = 0; i < 150; i++) {
        printf("Cliente %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Valor das compras: ");
        scanf("%f", &compras);

        if (compras < 500000)
            bonus = compras * 0.10;
        else
            bonus = compras * 0.15;

        printf("Cliente: %s | Bônus: R$%.2f\n\n", nome, bonus);
    }

    return 0;
}
