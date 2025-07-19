#include <stdio.h>

int main() {
    int d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    int total1 = d1 + m1 * 30 + a1 * 360;
    int total2 = d2 + m2 * 30 + a2 * 360;

    int diff = total2 - total1;
    if (diff < 0) diff = -diff;

    printf("Diferença aproximada: %d dias\n", diff);
    return 0;
}
