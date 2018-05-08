#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt;
  for (cnt = 0; cnt < 10; cnt++) {
    printf("%d - Hello!\n", cnt);
  }
  cnt = 0;
  while (cnt < 10) {
    printf("%d - Hello!\n", cnt);
    cnt++;
  }


  return 0;
}