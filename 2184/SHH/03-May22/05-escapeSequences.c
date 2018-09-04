#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  printf("hello!\a\n"); // beep
  printf("ABCD\bEFG\n");
  printf("He is OK!\rIt\n");
  printf("*\t*\t*\t*\t\n");
  printf("123\t4\t5678\t9\n");
  printf("12\v34\n"); // not for screen
  printf("12\f34\n"); // not for screen
  printf("This is backslash itself: \\\n");
  printf("And here is a double quote:\"\n");
  return 0;
}