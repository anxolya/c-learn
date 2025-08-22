#include <stdio.h>

int main() {
    printf("Enter a dollar amount: ");
    int amount;
    scanf("%d", &amount);

    int b20, b10, b5, b1;
    b20 = amount / 20;
    amount %= 20;
    b10 = amount  / 10;
    amount %= 10;
    b5 = amount  / 5;
    amount %= 5;
    b1 = amount;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", b20, b10, b5, b1);
    return 0;
}
