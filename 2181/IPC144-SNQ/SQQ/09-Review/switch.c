#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int value;
  switch (value) {
  case 20:
    task(1);
    break;
  case 10:
    task(2);
    break;
  case 5:
  case 6:
  case 15:
    task(3);
    break;
  default:
    task(4);
    break;
  }
  return 0;
}