#include <stdio.h>

int main() {
    float p1, p2, p3;

    scanf("%f", &p1);
    printf("%.2f\n", (p1 * 0.95) * 1.07);

    scanf("%f", &p2);
    printf("%.2f\n", ((p1 + p2) * 0.85) * 1.07);

    scanf("%f", &p3);
    printf("%.2f\n", ((p1 + p2 + p3) * 0.70) * 1.07);

    return 0;
}