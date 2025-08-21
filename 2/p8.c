#include <stdio.h>

int main() {
    float loan, rate, monthly;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    rate = 1 + rate/100.0f/12.0f;
    

    loan = loan*rate - monthly;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan = loan*rate - monthly;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = loan*rate - monthly;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
