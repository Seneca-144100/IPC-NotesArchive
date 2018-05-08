#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SUM a+b
int main(void) {
  int a;
  a = 0;
  while (a < 10) {
    printf("row: %d, Inner Value of a: %d\n", a + 1, a);
    a++;
  }
  printf("outter value of a:%d\n", a);
  for (a = 0; a < 10; a++) {
    printf("row: %d, Inner Value of a: %d\n", a + 1, a);
  }
  a = 0;
  do {
    printf("row: %d, Inner Value of a: %d\n", a + 1, a);
    a++;
  } while (a < 10);
  printf("outter value of a:%d\n", a);


  printf("outter value of a:%d\n", a);
  printf("Goodbye!\n");
  return 0;
}