#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);

int main(void) {
  int number;
  printf("Please enter an integer: ");
  number = getInt();
  printf("You enterd %d\n", number);
  printf("Please enter an integer: ");
  number = getInt();
  printf("You enterd %d\n", number);
  printf("Please enter an integer: ");
  number = getInt();
  printf("You enterd %d\n", number);
  printf("Please enter an integer: ");
  number = getInt();
  printf("You enterd %d\n", number);
  return 0;
}