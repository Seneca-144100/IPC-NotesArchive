#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// gcc -Wall prg.c readInt.c

struct Box {
  int width;
  int height;
};
int readInt(void);

struct Box getBoxSpecs();
void printBox(struct Box B);


int main(void) {
  struct Box boxToPrint;
  boxToPrint = getBoxSpecs();
  printBox(boxToPrint);
  return 0;
}






struct Box getBoxSpecs() {
  struct Box B;
  printf("Box information Entry....\n");
  printf("Please enter the width: ");
  B.width = readInt();
  printf("Please enter the height: ");
  B.height = readInt();
  return B;
}

void printBox(struct Box B) {
  int cnt;
  int linecnt;
  for (cnt = 0; cnt < B.width; cnt++) {
    printf("*");
  }
  printf("\n");

  for (cnt = 0; cnt < B.height - 2; cnt++) {
    printf("*");
    for (linecnt = 0; linecnt < B.width - 2; linecnt++) {
      printf(" ");
    }
    printf("*\n");
  }

  for (cnt = 0; cnt < B.width; cnt++) {
    printf("*");
  }
  printf("\n");
}