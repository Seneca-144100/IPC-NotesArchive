#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bar.h"
struct Bar getBar(void) {
  struct Bar br;
  printf("Bar char: ");
  scanf("%c", &br.filling);
  printf("Bar length: ");
  br.length = getLimitedInt(1, 79);
  return br;
}
void drawBar(struct Bar b) {
  int i;
  for (i = 0; i < b.length; i++) {
    putchar(b.filling);  // printf("%c", ch);
  }
  putchar('\n'); // printf("\n");
}