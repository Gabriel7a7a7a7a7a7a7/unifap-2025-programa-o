#include <stdio.h>

int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            soma += i;
    return soma;
}

int main() {
    int count = 0, num = 2;

    printf("Os 5 primeiros números perfeitos são:\n");
    while (count < 5) {
        if (somaDivisores(num) == num) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
