#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int value;
  for (printf("init\n"), value = 0; value < 5; value++, printf("End Of Each Loop\n")) {
    printf("Start of each loop\n");
    printf("Value is: %d\n", value);
  }
  printf("-------------------------------------------------\n");
  printf("init\n"); 
  value = 0;
  while (value < 5) {
    printf("Start of each loop\n");
    printf("Value is: %d\n", value);
    value++;
    printf("End Of Each Loop\n");
  }
  
  return 0;
}