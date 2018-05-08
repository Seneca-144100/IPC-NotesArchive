#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//void ltrim(char *str) {
//  int i;
//  while (isspace(str[0])) {
//    for (i = 0; str[i] != 0 ; i++) {
//      str[i] = str[i + 1];
//    }
//  }
//}
int ltrim(char *str) {
  int i=-1;
  int j;
  while (isspace(str[++i]));
  for (j = i; str[j] != 0; j++) {
    str[j-i] = str[j];
  }
  str[j-i] = 0;
  return i;
}
int main(void) {
  char str[21];
  char str2[21];
  int i;
  printf("str: ");
  scanf("%s", str);
  printf("str2: ");
  scanf("%s", str2);
  printf("%s - %s\n", str, str2);
  return 0;
}

