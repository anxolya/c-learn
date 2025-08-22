#include <stdio.h>

int main() {
    printf("Enter an amount: ");
    float amount;
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount*1.05f);
    return 0;
}
