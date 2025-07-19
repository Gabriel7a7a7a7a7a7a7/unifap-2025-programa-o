#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int count = 0, num = 1;

    printf("20 primeiros números primos (incluindo 1):\n");
    while (count < 20) {
        if (num == 1 || ehPrimo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
