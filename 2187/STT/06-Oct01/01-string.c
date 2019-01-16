#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ST_NO 200
int getInt(void);
double getDouble(void);

int main(void) {
  int i;
  char name[40];
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 'e';
  name[3] = 0;
  for (i = 0; name[i] != 0; i++) {
    printf("%c", name[i]);
  }
  printf("\n");

  return 0;
}