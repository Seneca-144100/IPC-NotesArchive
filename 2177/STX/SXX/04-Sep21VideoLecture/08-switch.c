#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char choice;
  double price = 12.0; // base price for a burger
  printf("---=== Burger Price Check ===---\n");
  printf("A: The Italian Burger\n");
  printf("B: Smokey Burger\n");
  printf("C: Veggie Burger\n");
  printf("D: Cheese Burger\n");
  printf("Enter any key for a regular hamburger\n");
  printf("Your choice: ");
  scanf("%c", &choice);
  printf("\nBase price for a burger is $%.2lf\n", price);
  switch (choice) {
  case 'a':
    printf("Added $1.50\n");
    price += 1.5;
    break;
  case 'b':
    printf("Added $1.65\n");
    price += 1.65;
    break;
  case 'c':
    printf("Added $0.85\n");
    price += 0.85;
    break;
  case 'd':
    printf("Added $1.10\n");
    price += 1.10;
    break;
  default:
    printf("Nothing added!\n");
  }
  printf("Total price is $%.2lf\n", price);
  return 0;
}