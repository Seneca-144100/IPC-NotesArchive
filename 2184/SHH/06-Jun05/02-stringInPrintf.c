#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[20] = "Fardad Soleimanloo";
  printf("%s\n", name);
  name[10] = 0;
  printf("%s\n", name);
  return 0;
}