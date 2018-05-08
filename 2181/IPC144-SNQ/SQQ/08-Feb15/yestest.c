#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int yes(void);
int main(void) {
  printf("Yes? ");
  if (yes()) {
    printf("yes!\n");
  }
  else {
    printf("no!\n");
  }
  return 0;
}