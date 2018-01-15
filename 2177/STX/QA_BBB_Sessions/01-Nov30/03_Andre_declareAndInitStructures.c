#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  int stNo;
  char name[41];
  double GPA;
};


int main() {
  struct Student S = {12345, "Fardad Soleimanloo", 3.5 };

  return 0;
}
