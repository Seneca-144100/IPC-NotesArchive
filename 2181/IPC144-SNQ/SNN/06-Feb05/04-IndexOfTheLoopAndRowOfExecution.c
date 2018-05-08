#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt;
  for (cnt = 0; cnt < 10; cnt++) {
    printf("Row:%d, cnt value: %d - Hello!\n", cnt+1, cnt);
  }
  cnt = 0;
  while (cnt < 10) {
    printf("Row:%d, cnt value: %d - Hello!\n", cnt + 1, cnt);
    cnt++;
  }


  return 0;
}