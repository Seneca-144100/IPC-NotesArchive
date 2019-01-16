#define _CRT_SECURE_NO_WARNINGS

#include "myIO.h"
#include "bar.h"
// gcc -Wall barMain.c myIO.c bar.c <ENTER>
int main(void) {
  struct Bar bar;
  struct Bar abc;
  bar = getBar();
  drawBar(bar);
  abc = bar;
  drawBar(abc);
  return 0;
}
