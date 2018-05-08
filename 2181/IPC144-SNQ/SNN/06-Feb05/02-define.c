#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define abc 3
#define def 5
#define SUM b+c
#define Value xyz
int main(void) {
  int a; 
  int b = 3;
  int c = 4;
  a = abc + def;
  printf("%d\n", a);
  // careful with SUM and what it expands to!!!!
  a = 2 * SUM;// +Value; if it was here the error would be on xyz, and not value.
  printf("%d\n", a);
  return 0;
}