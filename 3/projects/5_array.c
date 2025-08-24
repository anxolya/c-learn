#include <stdio.h>

int main() {
    puts("Enter the numbers from 1 to 16 in any order:");
    int nums[4][4];
    for (int i = 0; i < 4*4; ++i) {
        scanf("%d", &nums[i/4][i%4]);
    }

    for (int i = 0; i < 4; ++i) {
        printf("%2d %2d %2d %2d\n", nums[i][0], nums[i][1], nums[i][2], nums[i][3]);
    }

    int sum = 0;
    printf("Row sums: ");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            sum += nums[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\nColumn sums: ");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            sum += nums[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\nDiagonal sums: ");
    for (int i = 0; i < 4; ++i) {
        sum += nums[i][i];
    }
    printf("%d ", sum);
    sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += nums[i][3-i];
    }
    printf("%d\n", sum);

    return 0;
}
