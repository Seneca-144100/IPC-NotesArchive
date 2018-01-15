#include <stdio.h>
int main(void) {
  int a = 5;
  int b = 10;
  int c;
  a = a + 1;
  printf("a: %d\n", a);
  // assignment operator returns the set value to left
  // c = a = b + 1; // this is ok, you can do it
  //c = a + (b = 90);  // this is nuts, don't do it

  return 0;
}