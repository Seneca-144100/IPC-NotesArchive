#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void);
void title(void) {
  printf("Welcome to the Assessment Analyzer program\n\n");
}
void hr(int len, char ch) {
  int i;
  for (i = 0; i < len; i++) {
    printf("%c", ch);
  }
  printf("\n");

}

// 999<ENTER>
//         999<ENTER>
//999asldkjf;alskd<ENTER>
//avbdasba<ENTER>

int getInt(void) {
  int num;
  char newline = 'x';
  scanf("%d%c", &num, &newline);
  while (newline != '\n') {
    printf("Invalid integer, try again: ");
    flushKeyboard();
    scanf("%d%c", &num, &newline);
  }
  return num;
}
void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}