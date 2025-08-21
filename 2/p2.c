#include <stdio.h>

// all digits that I remember by heart
#define PI 3.1415926535

int main() {
    float r = 10;
    float volume = 4.0f/3.0f*PI*r*r*r;
    printf("Volume of a sphere with a %f-meter radius is %.2f cubic meters\n", r, volume);
    return 0;
}
