#include <stdio.h>

int main() {
  int item, d, m, y;
  float price;
  
  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &d, &m, &y);

  printf("Item \t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$  %.2f\t%d/%d/%d\n", item, price, d, m, y);
  return 0;
}
