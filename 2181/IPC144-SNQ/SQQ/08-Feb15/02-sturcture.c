#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Box {
  int height;
  int width;
  int length;
  double weight;
  double bottles[12];
};


int main(void) {
  struct Box myBox = { 4, 6, 8, 12.34 , {1.,2.,3.,4.,5.,6.,7.,8.,9.,10., 11., 12.} };
  struct Box B[12];
  
  myBox.height = 10;
  myBox.width = 20;
  myBox.length = 15;
  myBox.weight = 123.45;

  scanf("%d", &myBox.width);
  scanf("%lf", &myBox.bottles[8]);
  B[3] = myBox;
  return 0;
}