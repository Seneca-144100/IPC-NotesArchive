
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt;
  int num;
  cnt = 0;
  printf("How many hellos? ");
  scanf("%d", &num);
  while (cnt < num) {
    printf("%d- Hello there!\n", cnt+1);
    cnt = cnt + 1;
  }

  return 0;
}
