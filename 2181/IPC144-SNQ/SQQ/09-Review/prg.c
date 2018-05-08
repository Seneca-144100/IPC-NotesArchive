#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define type int
int main(void) {
  type arr[10] = { 0 };
  type arr[10] = { 10,20,30,40,50,60,70,80,90,100 }; // wrong answer for setting, correct one for initializing 

  int i;
  int j;
  printf("First: %d\n", arr[0]);
  printf("Last: %d\n", arr[19]);
  //printf("too much: %d\n", arr[20]);
  for (j = 0, i = 10; j<10;j++, i += 10) {
    arr[j] = i;
  }
  for (i = 0; i < 10; i++) {
    arr[i] = (i + 1) * 10;
  }
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  return 0;
}