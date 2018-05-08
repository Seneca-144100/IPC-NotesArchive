#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  double gpa;
  int NoOfsem;
  char name[28];
};
int main(void) {
  int* p = 8;
  double* d = 8;
  struct Student* s = 40;
  printf("int Address: %u - double Address: %u\n", p, d);
  printf("Student Address: %u\n", s);
  p++;
  d++;
  s++;
  printf("int Address plus one: %u - double Address plus one: %u\n", p, d);
  printf("Student Address plus one: %u\n", s);

  return 0;
}