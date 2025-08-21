#include <stdio.h>

int main() {
    printf("Enter the value of x: ");
    float x;
    scanf("%f", &x);
    // optimized the number of multiplications by x (and for me typing less of "*x"
    printf("2x^5+2^4-5x^3-x^2+7x-6 = %f\n", -6 + x*(7 + x*(-1 + x*(-5) + x*(2 + x*3))));
}
