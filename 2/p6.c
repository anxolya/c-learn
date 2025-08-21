// WHY DO I KEEP DOING MODIFICATIONS BEFORE I EVEN READ THEM
// this is practically the same formula, ok?

#include <stdio.h>

int main() {
    printf("Enter the value of x: ");
    float x;
    scanf("%f", &x);
    // optimized the number of multiplications by x
    printf("2x^5+2^4-5x^3-x^2+7x-6 = %f\n", -6 + x*(7 + x*(-1 + x*(-5) + x*(2 + x*3))));
}
