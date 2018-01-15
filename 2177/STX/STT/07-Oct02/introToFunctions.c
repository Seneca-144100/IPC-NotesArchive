#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxNoOfStudents 2500

void printHello(void) {
  printf("Hello!\n");
}

void printSum(int A, int B) {
  printf("%d", A + B);
}

double sum(double x, double y) {
  return x + y;
}

int readInt(void) {
  int value;
  scanf("%d", &value);
  return value;
}

int main(void) {
  double value;
  int i;
  int cnt;
  printf("How many hellos?");
  cnt = readInt();
  for (i = 0; i < cnt; i++) {
    printHello();
  }
  printf("The sum of 4 and 10 is ");
  printSum(4, 10);
  value = sum(3.4, 4.5);

  printf("\nThe sum of 3.4 and 4.5 is %lf\n", value);

  return 0;
}