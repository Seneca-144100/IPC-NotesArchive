#define _CRT_SECURE_NO_WARNINGS
#include "bar.h"

int main(void) {
  struct Bar b;
  b = getBar();
  drawBar(b);
  return 0;
}



