#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  char name[41];
  printf("please enter you name: ");
  scanf("%[^\n]", name);
  printf("Hello %s\n", name);
  return 0;
}
