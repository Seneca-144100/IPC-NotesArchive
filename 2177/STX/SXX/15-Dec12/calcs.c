#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define TAX (0.13)
#include "utilities.h"
const double TAX = 0.13;


void title(void);
int menu(void);
void SumOfTwo(void);
void SumOfNumbers(void);
void ShoppingCost(void);


int readItemRec(struct ItemRec* p, FILE* ftpr);


int main(void) {
  int selection = 1;// set to one to enter the loop
  title();  
  while (selection != 0) {
    selection = menu();
    switch (selection){
    case 1:
      SumOfTwo();
      pause();
      break;
    case 2:
      SumOfNumbers();
      pause();
      break;
    case 3:
      ShoppingCost();
      pause();
      break;
    default:
      printf("Goodbye!\n");
      break;
    }
  }
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
}

void SumOfNumbers(void) {
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
}
#define MAX_LIST_NUM 100
struct ItemRec {
  int sku;
  double price;
  int qty;
  int taxed;
  char name[41];
};
int readItemRecOkButCouldBeBetter(struct ItemRec* p, FILE* datafile) {
  int res;
  res = fscanf(datafile, "%d,%d,%lf,%d,%[^\n]\n",
    &p->sku, &p->qty, &p->price, &p->taxed, p->name);
  /*if (res == 5) {
  return 1;
  }
  else {
  return 0;
  }*/
  // return res == 5 ? 1 : 0;
  return res == 5;
}
int readItemRec(struct ItemRec* p, FILE* datafile) {  
  return  fscanf(datafile, "%d,%d,%lf,%d,%[^\n]\n",
    &p->sku, &p->qty, &p->price, &p->taxed, p->name) == 5;
}
int loadRecords(struct ItemRec* recs,const char* filename) {
  int i = -1;
  int done = 0;
  FILE* data = fopen(filename, "r");
  if (data != NULL) {
    i = 0;
    printf("Reading Records:\n");
    while (i < MAX_LIST_NUM && !done) {
      printf("%03d\r", i + 1);
      if (readItemRec(&recs[i], data)) {
        i++;
      }
      else {
        done = 1;
      }
    }
    printf("\ndone!\n");
    fclose(data);
  }
  return i;
}
void prnItemRecTitle(void) {
  printf("  SKU  |  Price   | Qty | Taxed\n");
  printf(" ----- | -------- | --- | -----\n");
}
void prnItemRec(const struct ItemRec* I) {
  printf(" %5d | %8.2lf | %3d | %-3s\n", 
    I->sku, I->price, I->qty, I->taxed == 1 ? "Yes" : "No");
}
double itemTax(struct ItemRec I) {
  return (I.taxed == 1 ? I.price * TAX * I.qty : 0.0);
}
double totalRecPrice(struct ItemRec I) {
  return (I.price * I.qty);
}
void prnFooter(void) {
  printf(" ------------------------------\n");
}
void prnItemTotals(double total, double totalTax) {
  printf("Total:     %15.2lf\n", total);
  printf("Tax:       %15.2lf\n", totalTax);
  printf("After Tax: %15.2lf\n", total + totalTax);
}
void ShoppingCost(void) {
  struct ItemRec I[MAX_LIST_NUM];
  int i = 0;
  int cnt;
  int done = 0;
  double total = 0.0;
  double totalTax = 0.0;
  cnt = loadRecords(I, "Items.txt");
  // printReprot(I, cnt);
  prnItemRecTitle();
  for (i = 0; i < cnt; i++) {
    prnItemRec(&I[i]);
    totalTax += itemTax(I[i]);
    total += totalRecPrice(I[i]);
  }
  prnFooter();
  prnItemTotals(total, totalTax);
  return 0;
}
