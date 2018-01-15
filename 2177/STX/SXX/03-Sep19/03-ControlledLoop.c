#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int keepMarching = 1;
  while (keepMarching) {
    printf("one\n");
    printf("two\n");
    printf("three\n");
    printf("four\n");
    printf("Keep marching?(1 for yes and 0 for no): ");
    scanf("%d", &keepMarching);
  }
  printf("Sttttttttttttop!\n");
  return 0;
}