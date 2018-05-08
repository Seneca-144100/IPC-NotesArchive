#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tools.h"
#include "ptr.h"

void setTo1000(int pointer ptr);
int main(void) {
  int pointer p;
  int i;
  int j;
  i = 5;
  p = addressOf i;
  j = targetOf p;
  printf("%d\n", j);
  targetOf p = 234;
  j = i;
  printf("%d\n", j);
  setTo1000(addressOf j);
  printf("%d\n", j);
  return 0;
}

void setTo1000(int pointer ptr) {
  targetOf ptr = 1000;
}
