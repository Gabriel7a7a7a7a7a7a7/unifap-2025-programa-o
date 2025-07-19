#include <stdio.h>

int main() {
    int valor, dentro = 0, fora = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20)
            dentro++;
        else
            fora++;
    }

    printf("Dentro do intervalo [10,20]: %d\n", dentro);
    printf("Fora do intervalo: %d\n", fora);

    return 0;
}
