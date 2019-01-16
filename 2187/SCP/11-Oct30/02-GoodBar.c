#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Bar {
  char filling;
  int length;
};


void drawBar(struct Bar theBar);

int main(void) {
  int values[5] = { 2, 50 , 60, 10, 15 };
  struct Bar br = { '*', 0 };
  int i;
  for (i = 0; i < 5; i++) {
    br.length = values[i];
    drawBar(br);
  }
  return 0;
}


void drawBar(struct Bar b) {
  int i;
  printf("%02d: ", b.length);
  for (i = 0; i < b.length; i++) {
    printf("%c", b.filling);
  }
  printf("\n");
}


