#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Bar {
  char filling;
  int length;
};
#include "myIO.h"
void drawBar(struct Bar b);
struct Bar getBar(void);

int main(void) {
  struct Bar bar;
  struct Bar abc;
  bar = getBar();
  drawBar(bar);
  abc = bar;
  return 0;
}
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