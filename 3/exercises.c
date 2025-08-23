#include <stdio.h>

void ex3_1() {
    printf("%6d,%4d\n", 86, 1040); // ____86, 1040
    printf("%12.5e\n", 30.253); // _3.02530e+01
    printf("%.4f\n", 83.162); // 83.1620
    printf("%-6.2g\n", .0000009979); //.99e-6 // nope: 1e-06
}

void ex3_2(float x) {
    printf("|%8.1e|\n", x);
    printf("|%-10.6e|\n", x); //?? it doesn't fit..
    printf("|%8.3f|\n", x);
    printf("|%-6.0f|\n", x);
}

void ex3_6() {
    /* Adds two fractions */
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
}

int main() {
    ex3_6();
    return 0;
}
