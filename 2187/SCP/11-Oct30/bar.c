#include "myIO.h"
#include "bar.h"

struct Bar getBar(void) {
  struct Bar theBar;
  printf("Bar char: ");
  scanf("%c", &theBar.filling);
  printf("Bar length: ");
  theBar.length = getLimitedInt(1, 75);
  return theBar;
}
void drawBar(struct Bar b) {
  int i;
  printf("%02d: ", b.length);
  for (i = 0; i < b.length; i++) {
    printf("%c", b.filling);
  }
  printf("\n");
}
