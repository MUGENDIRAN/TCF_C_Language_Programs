#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum, diff, prod, mod;
    float div;

    sum = a + b;
    diff = a - b;
    prod = a * b;
    div = (float)a / b;
    mod = a % b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Division: %.2f\n", div);
    printf("Modulus: %d\n", mod);

    return 0;
}
