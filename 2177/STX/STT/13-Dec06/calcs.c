#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double TAX = 0.13;
//#define TAX 0.13

void title(void);
int menu(void);
int getSelection(int min, int max);
void flushKeyboard(void);
void pause(void);
void SumOfTwo(void);
void SumOfNumbers(void);
void ShoppingCost(void);
double getDouble(void);
int getInt(void);
int getLimitedInt(int min, int max);
double getLimitedDouble(double min, double max);
int yes(void);


int main(void) {
  int selection;
  title();
  do {
    selection = menu();
    switch (selection) {
    case 1:
      SumOfTwo();
      break;
    case 2:
      SumOfNumbers();
      break;
    case 3:
      ShoppingCost();
      break;
    default:
      printf("Goodbye!\n");
    }
  }while(selection != 0);

  return 0;
}

int menu(void) {
  int selection;
  printf("1- Sum of two numbers\n");
  printf("2- Sum of numbers and max and min\n");
  printf("3- Shopping Cost Calculation\n");
  printf("0- Exit program\n");
  printf("> ");
  selection = getSelection(0,3);
  return selection;
}
int getSelection(int min , int max) {
  return getLimitedInt(min, max);
}


void title(void) {
  printf("----==== Calculations ====----\n");
}

void SumOfTwo(void) {
  double num1;
  double num2;
  double res;
  printf("First number: ");
  num1 = getDouble();
  printf("Second number: ");
  num2 = getDouble();
  res = num1 + num2;
  printf("The sum is %.3lf\n", res);
  pause();
}

void SumOfNumbers(void) { // using arrays to keep the data entered
  int cnt;
  int i;
  double num[100];
  int minIdx = 0;
  int maxIdx = 0;
  double sum = 0;
  printf("Please enter the number of entries: ");
  cnt = getLimitedInt(2, 100);
  for (i = 0; i < cnt; i++) {
    printf("%3d: ", i + 1);
    num[i] = getDouble();
    if (num[i] < num[minIdx]) minIdx = i;
    if (num[i] > num[maxIdx]) maxIdx = i;
    sum += num[i];
  }
  printf("Numbers:\n");
  for (i = 0; i < cnt; i++) {
    printf("%3d: ", i + 1);
    printf("%10.2lf", num[i]);
    if (i == minIdx) {
      printf(" (Smallest)");
    }
    if (i == maxIdx) {
      printf(" (Largest)");
    }
    printf("\n");
  }
  printf("sum: %10.2lf\n", sum);
  pause();
}
#define MAX_LIST_NUM 100
struct ItemRec {
  int sku;
  double price;
  int qty;
  int taxed;
};
int readItemRec(struct ItemRec* p) {
  printf("Sku: ");
  p->sku = getLimitedInt(10000, 99999);
  printf("Price: ");
  p->price = getLimitedDouble(0.0, 1000.0);
  printf("Quantity: ");
  p->qty = getLimitedInt(1, 999);
  printf("Taxed (y/n): ");
  p->taxed = yes();
  printf("Confirm the info? (y/n): ");
  return yes();
}
void prnItemRec(struct ItemRec I) {
  printf(" %5d | %8.2lf | %3d | %-3s\n", I.sku, I.price, I.qty, I.taxed == 1 ? "Yes" : "No");
}
void prnItemRecTitle(void){
  printf("  SKU  |  Price   | Qty | Taxed\n");
  printf(" ----- | -------- | --- | -----\n");
}
double itemTax(struct ItemRec I) {
  return (I.taxed == 1 ? I.price * TAX * I.qty : 0.0)
}
double totalRecPrice(struct ItemRec I) {
  return (I.price * I.qty)
}
void ShoppingCost(void) {
  struct ItemRec I[MAX_LIST_NUM];
  int i = 0;
  int cnt;
  int done = 0;
  double total = 0.0;
  double totalTax = 0.0;
  printf("Please enter the items' information:\n");
  while (i < MAX_LIST_NUM && !done) {
    printf("%3d-->\n", i + 1);
    if (readItemRec(&I[i])) {
      i++;
    }
    printf("Enering more data? (y/n): ");
    done = !yes();
  }
  cnt = i;
  prnItemRecTitle();
  for (i = 0; i < cnt; i++) {
    prnItemRec(I[i]);
    totalTax += itemTax(I[i]);
    total += totalRecPrice(I[i]);
  }
  printf(" ------------------------------\n");
  printf("Total:     %15.2lf\n", total);
  printf("Tax:       %15.2lf\n", totalTax);
  printf("After Tax: %15.2lf\n", total + totalTax);
  pause();
}