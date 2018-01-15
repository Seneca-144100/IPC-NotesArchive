#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  int i = 5;
  while (i < 3) { // while many never happen.
    printf("%d\n", i);
    i++;
  }
  do {               // do while happens at lease once.
     printf("%d\n", i);
     i++;
  } while (i < 3);
  printf("While ended\n");
  return 0;
}
