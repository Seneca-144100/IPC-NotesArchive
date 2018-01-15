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
    /*switch (selection) {
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
    }*/
    if (selection == 1) {
      SumOfTwo();
    }
    else if (selection == 2) {
      SumOfNumbers();
    }
    else if (selection == 3) {
      ShoppingCost();
    }
    else {
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
//void SumOfNumbers(void) {
//  int cnt; // number of values
//  int i;  // loop counter
//  double num; // get the current number from user
//  double min; // update to min of all numbers
//  double max; // undate to max of all numbers
//  double sum = 0; // the sum of all numbers
//  printf("Please enter the number of entries: ");
//  cnt = getInt();
//  for (i = 0; i < cnt; i++) {
//    printf("%3d: ", i + 1);
//    num = getDouble();
//    if (i == 0) {
//      min = max = num;
//    }
//    else {
//      if (num < min) min = num;
//      if (num > max) max = num;
//    }
//    sum += num;
//  }
//  printf("The sum of the numbers is:    %15.3lf\n", sum);
//  printf("The minimum value enteerd is: %15.3lf\n", min);
//  printf("The maximum value entered is: %15.3lf\n", max);
//  pause();
//}
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
void ShoppingCost(void) {
  int sku[MAX_LIST_NUM];
  double price[MAX_LIST_NUM];
  int qty[MAX_LIST_NUM];
  int taxed[MAX_LIST_NUM];
  int i = 0;
  int cnt;
  int done = 0;
  double total = 0.0;
  double totalTax = 0.0;
  printf("Please enter the items' information:\n");
  while (i < MAX_LIST_NUM && !done) {
    printf("%3d-->\n", i + 1);
    printf("Sku: ");
    sku[i] = getLimitedInt(10000, 99999);
    printf("Price: ");
    price[i] = getLimitedDouble(0.0, 1000.0);
    printf("Quantity: ");
    qty[i] = getLimitedInt(1, 999);
    printf("Taxed (y/n): ");
    taxed[i] = yes();
    printf("Save the above information in list? (y/n): ");
    if (yes()) {
      i++;
    }
    printf("Enering more data? (y/n): ");
    done = !yes();
  }
  cnt = i;
  printf("  SKU  |  Price   | Qty | Taxed\n");
  printf(" ----- | -------- | --- | -----\n");

  for (i = 0; i < cnt; i++) {
    printf(" %5d | %8.2lf | %3d | %-3s\n", sku[i], price[i], qty[i], taxed[i] == 1 ? "Yes" : "No");
    totalTax += (taxed[i] == 1 ? price[i] * TAX * qty[i] : 0.0);
    total += (price[i] * qty[i]);
  }
  printf(" ------------------------------\n");
  printf("Total:     %15.2lf\n", total);
  printf("Tax:       %15.2lf\n", totalTax);
  printf("After Tax: %15.2lf\n", total + totalTax);
  pause();
}