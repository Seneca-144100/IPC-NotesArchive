#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Record {
  int a;
  float f[3];
  double d;
};

int main(void) {
  struct Record R, X, Y, Z;
  struct Record N[20];
  struct Record A;
  int i;
  scanf("%d", &R.a);
  printf("%d", R.a);
  for (i = 0; i < 3; i++) {
    scanf("%f", &R.f[i]);
  }
  A = R;
  N[9] = R;
}