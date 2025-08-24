#include <stdio.h>

int main() {
    printf("Enter the numbers from 1 to 16 in any order:\n");
    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, na, nb, nc, nd, ne, nf;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &na, &nb, &nc, &nd, &ne, &nf);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, na, nb, nc, nd, ne, nf);
    printf("Row sums: %d %d %d %d\n", n0 + n1 + n2 + n3, n4 + n5 + n6 + n7, n8 + n9 + na + nb, nc + nd + ne + nf);
    printf("Column sums: %d %d %d %d\n", n0 + n4 + n8 + nc, n1 + n5 + n9 + nd, n2 + n6 + na + ne, n3 + n7 + nb + nf);
    printf("Diagonal sums: %d %d\n", n0 + n5 + na + nf, n3 + n6 + n9 + nc);
    return 0;
}
