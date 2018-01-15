#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
const double TAX = 0.13;
//#define TAX 0.13
//const int noOfStudents = 40;
#define noOfStudents 40


void title(void);
int menu(void);
int getSelection(int min, int max);
void SumOfTwo(const char* firstPrompt, const char* secondPrompt, const char* resultPrompt);
void SumOfNumbers(void);
void ShoppingCost(void);
void SaveMarksReport(double marks[][noOfStudents], const char* filename);

int main(void) {
  int selection;
  title();
  do {
    selection = menu();
    switch (selection) {
    case 1:
      
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
  printf("1- Student test marks\n");
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
//const int noOfStudents = 40;
#define noOfStudents 40
void TestMarks(void) {
  int num;
  int i;
//  double t0[noOfStudents];
//  double t1[noOfStudents];
  double t[2][noOfStudents];
  printf("Please enter the number of students: ");
  num = getLimitedInt(1, 40);
  for (i = 0; i < num; i++) {
    printf("Test 1: ");
//    t0[i] = getDouble(0, 40);
    t[0][i] = getDouble(0, 40);
    printf("Test 2: ");
//    t1[i] = getDouble(0, 40);
    t[1][i] = getDouble(0, 40);
  }
  SaveMarksReport(t, "marks.txt");
}


void SumOfTwo(const char* firstPrompt,const char* secondPrompt,const char* resultPrompt) {
  double num1;
  double num2;
  double res;
  
  printf(firstPrompt);
  num1 = getDouble();
  printf(secondPrompt);
  num2 = getDouble();
  res = num1 + num2;
  printf(resultPrompt);
  printf("%.3lf\n", res);
  pause();
}
void SaveMarksReport(double marks[][noOfStudents], const char* filename) {
  // open a file using the file name for writing.
  // in a loop upto noOfStudents print the two marks in the opened file
  // close the file
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
  char name[41];
};
int readItemRecOkbutcouldbeBetter(struct ItemRec* p, FILE* data) {
  int res = fscanf(data, "%d,%d,%lf,%d,%[^\n]\n",
    &p->sku, &p->qty, &p->price, &p->taxed, p->name);
 /* bad multiple return statements
 if (res == 5) {
    return 1;
  }
  else {
    return 0;
  }*/
 // return res == 5 ? 1 : 0;
  return res == 5;// if 5 recs were read
}
int readItemRec(struct ItemRec* p, FILE* data) {
  return  fscanf(data, "%d,%d,%lf,%d,%[^\n]\n",
    &p->sku, &p->qty, &p->price, &p->taxed, p->name) == 5;
}
void prnItemRec(struct ItemRec I) {
  printf(" %5d | %8.2lf | %3d | %-3s\n", I.sku, I.price, I.qty, I.taxed == 1 ? "Yes" : "No");
}
void prnItemRecTitle(void){
  printf("  SKU  |  Price   | Qty | Taxed\n");
  printf(" ----- | -------- | --- | -----\n");
}
double itemTax(struct ItemRec I) {
  return (I.taxed == 1 ? I.price * TAX * I.qty : 0.0);
}
double totalRecPrice(struct ItemRec I) {
  return (I.price * I.qty);
}
void ShoppingCost(void) {
  struct ItemRec I[MAX_LIST_NUM];
  FILE* fdata;
  int i = 0;
  int cnt;
  int done = 0;
  double total = 0.0;
  double totalTax = 0.0;
  fdata = fopen("items.txt", "r");
  if (fdata) {
    printf("reading records\n");
    while (i < MAX_LIST_NUM && !done) {
      printf("%3d\r", i + 1);
      if (readItemRec(&I[i],fdata)) {
        i++;
      }
      else {
        done = 1;
      }
    }
    printf("\ndone!\n");
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
    fclose(fdata);
  }
  else {
    printf("Could not open file!\n");
  }
  pause();
}