
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char name1[41] = "abcdefghijklmnop";
  char name2[41] = "Fred";
  int n1;
  int n2 = 234;
  n1 = n2;
  //name1 = name2; Wrong, can't work because name1 and name2 are primitive types
  printf("StrCpy returned: %s\n", strcpy(name1, name2));
  printf("name1 is: %s\n", name1);
  printf("And %s is %d characters long. \n", name1, strlen(name1));
  return 0;
}