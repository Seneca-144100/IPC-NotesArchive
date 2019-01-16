
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ST_NO 200
int getInt(void);
double getDouble(void);

int main(void) {
  int i;
  //  char name[40] = { 'J', 'o', 'e' };
  char name[40] = "Fardad Soleimanloo";
  //for (i = 0; name[i] != 0; i++) {
  //  printf("%c", name[i]);
  //}
  //printf("\n");
  printf("%s\n", name);
  name[12] = 0;
  printf("%s\n", name);
  return 0;
}


