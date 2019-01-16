
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt;
  int mark;
  int done = 0; // initialize to false
  cnt = 0;
  int passed = 0;
  int failed = 0;
  while (!done) {

    printf("Please enter mark for student number %d: ", cnt + 1);
    scanf("%d", &mark);
    if (mark < 50) {
      printf("Failed!\n");
      failed++;
    }
    else {
      printf("Passed!\n");
      passed++;
    }

    printf("Do you want to Exit? Yes: 1, No: 0 ==>");
    scanf("%d", &done);
    cnt = cnt + 1;
  }
  printf("Out of %d students, %d failed and %d passed\n", failed + passed, failed, passed);
  printf("Good bye!\n");
  return 0;
}
