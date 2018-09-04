#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[21] = "Fardad";
  char lastname[31];
  char lastname2[31] = "Soleimanloo";
  int a[5000] = {    };
  int b[5000];

  b = a;  not possilbe

  //  lastname = "Soleimanloo";
  lastname[0] = 'S';
  lastname[1] = 'o';
  lastname[2] = 'l';
  ...
  lastname[11] = 0;


  return 0;
}