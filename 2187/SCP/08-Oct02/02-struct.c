#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_STD 200

int getInt(void);
double getDouble(void);

struct StudentGPA {
  int stno;
  double gpa;
};

int main(void) {
  struct StudentGPA sg1 = { 654321, 4.0 };
  struct StudentGPA sg2;
  struct StudentGPA s[50] = { { 0, 0.0} };
  struct StudentGPA r[3] = { { 123456, 3.3 }  ,{ 345678, 4.0 }   ,{ 234567, 3.4 } };
  sg1.gpa = 3.1;
  sg1.stno = 123456;
  printf("STNO: ");
  scanf("%d", &sg2.stno);
  printf("GPA: ");
  scanf("%lf", &sg2.gpa);



}

