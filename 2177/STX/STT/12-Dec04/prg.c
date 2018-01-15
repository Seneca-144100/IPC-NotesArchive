#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  while (getchar() != '\n');
}

void StrCpy(char des[], char src[]) {
  int i;
  for (i = 0; src[i] != 0; i++) {
    des[i] = src[i];
  }
  des[i] = 0;
}
void StrCat(char des[], char src[]) {
  int i;
  int j;
  for (i = 0; des[i] != 0; i++);
  for (j = 0; src[j] != 0; j++, i++) {
    des[i] = src[j];
  }
  des[i] = 0;
}
int main(void) {
  char name[21];
  char midname[21];
  char lastname[31];
  char fullname[71];
  printf("Name: ");
  scanf("%[^\n]", name);
  flushKeyboard();
  printf("Midname: ");
  scanf("%[^\n]", midname);
  flushKeyboard();
  printf("Lastname: ");
  scanf("%[^\n]", lastname);
  flushKeyboard(); 
  StrCpy(fullname, name);
  StrCat(fullname, " ");
  StrCat(fullname, midname);
  StrCat(fullname, " ");
  StrCat(fullname, lastname);
  printf("Fullname is: %s", fullname);
  return 0;
}