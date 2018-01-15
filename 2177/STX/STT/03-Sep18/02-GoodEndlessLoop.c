#include <stdio.h>
int main(void) {
  const int forever = 1;
  while (forever) {
    printf("one\n");
    printf("two\n");
    printf("three\n");
    printf("four\n");
  }
  return 0;
}