
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char name[21];
  char mid[21];
  char last[41];
  char fullname[83]; // 83, because 20 + 20 + 40 + null + 2 spaces
  printf("Enter names, comma separated; first,mid,last\n> ");
  scanf("%[^,],%[^,],%[^\n]", name, mid, last);
  fullname[0] = '\0';
  strcat(fullname, name);
  strcat(fullname, " ");
  strcat(fullname, mid);
  strcat(fullname, " ");
  strcat(fullname, last);
  printf("Your fullname is: %s\n", fullname);
  return 0;
}