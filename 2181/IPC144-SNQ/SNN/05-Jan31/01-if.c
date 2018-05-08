#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 0;
  if (a < 25) {
    printf("A is less than 25\n");
  }  
  if (a) {
    printf("A is not zero!\n");
  }
  return 0;
}