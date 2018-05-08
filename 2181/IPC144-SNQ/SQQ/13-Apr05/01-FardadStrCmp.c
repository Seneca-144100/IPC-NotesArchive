#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StrCmp(const char* str1, const char* str2) {
  int i=0;
  while (str1[i] && str1[i] == str2[i]) {
    i++;
  }
  return str1[i] - str2[i];
}
int main(void) {
  char n1[41] = "Fredrick";
  char n2[41] = "Fred";
  if (StrCmp(n1, n2) == 0) {
    printf("the same!\n");
  }
  else if(StrCmp(n1, n2) > 0){
    printf("%s comes first in Dictionary\n", n2);
  }
  else { // for sure StrCmp(n1, n2) < 0
    printf("%s comes first in Dictionary\n", n1);
  }
  putchar('\n');
  return 0;
}