#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
};

void printGpas(const struct Student stds[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%.2lf ", stds[i].gpa);
  }

}
int main(void) {
  struct Student Sarr[5];
  printGpas(Sarr, 5);
  return 0;
}