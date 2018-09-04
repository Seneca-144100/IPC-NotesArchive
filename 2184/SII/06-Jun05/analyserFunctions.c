#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void title(void) {
  printf("Welcome to the Assessment Analyzer program\n");
}
void divider(int len, char ch) {
  int i;
  for (i = 0; i < len; i++) {
    printf("%c", ch);
  }
  printf("\n");
}
void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}
//999<ENTER>
//      999<ENTER>
//999I just enter ninenine nine<ENTER>
//fifty two<ENTER>

int getint(void) {
  int num;
  char newline;
  scanf("%d%c", &num, &newline);
  while (newline != '\n') {
    //user is nuts
    printf("Invalid integer, please try again: ");
    flushKeyboard();
    scanf("%d%c", &num, &newline);
  }
  return num;
}