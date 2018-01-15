#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Name {
  char first[21];
  char last[41];
};
struct Student {
  struct Name name;
  double gpa;
};

void printGpas(const struct Student stds[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%s %s: %.2lf ", stds[i].name.first, stds[i].name.last,  stds[i].gpa);
  }

}
int main(void) {
  struct Student Sarr[5];
  printGpas(Sarr, 5);
  return 0;
}