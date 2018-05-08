#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int StrCmp(const char str1[], const char* str2) {
  int i = 0;
  while (str1[i] != '\0' && str1[i] == str2[i]) {
    i++;
  }
  return str1[i] - str2[i];
}
int main(void) {
  char name1[41] = "Fred";
  char name2[41] = "Freddie";
  if (StrCmp(name1, name2) == 0) {
    printf("The names are the same!\n");
  }
  else if (StrCmp(name1, name2) < 0) {
    printf("%s comes before %s in dictionary!\n", name1, name2);
  }
  else { // for sure StrCmp(name1, name2) > 0
    printf("%s comes before %s in dictionary!\n", name2, name1);
  }

  return 0;
}