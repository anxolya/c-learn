#include <stdio.h>

void ex2_1() {
    printf("Hello, World!\n");
}

void ex2_3_original() {
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
}

void ex2_3_original_stripped(){int height,length,width,volume,weight;height=8;length=12;width=10;volume=height*length*width;weight=(volume+165)/166;printf("Dimensions: %dx%dx%d\n",length,width,height);printf("Volume (cubic inches): %d\n",volume);printf("Dimensional weight (pounds): %d\n",weight);}


void ex2_3() {
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);
}

void ex2_4(int limit) {
    printf("The ints:\t");
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", i1, i2, i3, i4, i5, i6, i7, i8, i9, i10);

    printf("\nThe floats:\t");
    float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;
    printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10);
}


int main() {
    ex2_4(10);
    return 0;
}
