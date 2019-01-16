#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Bar {
  char filling;
  int length;
};

void drawBar(struct Bar b);

int main(void) {
  struct Bar br[3] = { {'=', 14},{'-', 70},{'+', 2} };
  int i;
  drawBar(br[0]);
  drawBar(br[1]);
  for (i = 1; i < 20; i++) {
    drawBar(br[2]);
    br[2].length += 2;
  }
  return 0;
}

void drawBar(struct Bar b) {
  int i;
  for (i = 0; i < b.length; i++) {
    putchar(b.filling);  // printf("%c", ch);
  }
  putchar('\n'); // printf("\n");
}