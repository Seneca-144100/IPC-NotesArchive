#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_STD 200

int getInt(void);
double getDouble(void);

struct Date {
  int day;
  int mon;
  int year;
};

struct Student {
  int stno;
  int sin;
  int semester;
  double gpa;
  int age;
  struct Date DOB;
};


int main(void) {
  struct Student S[50];
  S[2] = S[3];
}

