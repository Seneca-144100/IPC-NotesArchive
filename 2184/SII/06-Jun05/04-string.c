#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[21] = "Fardad Soleimanloo";
  //int i = 0;
  //while (name[i] != 0) {
  //  printf("%c", name[i]);
  //  i++;
  //}
  //printf("\n");
  printf("My name is %s\n", name);
  name[10] = 0;
  printf("My name is %s\n", name);
  return 0;

}