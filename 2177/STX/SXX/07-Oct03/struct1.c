#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxNoOfStudents 1000

struct StudentData {
  int No;
  int NoOfSubjects;
  float Gpa;
};

int main(void) {

  struct StudentData A = { 234567, 34, 3.8 };

  struct StudentData S[50] = { { 234567, 34, 3.8 } ,{ 134567, 54, 3.2 } };
  S[6].Gpa = 3.4;
  S[6].No = 123456;
  S[6].NoOfSubjects = 25;

  int studentNo[MaxNoOfStudents];
  int studentNoOfSubjects[MaxNoOfStudents];
  float studentGpa[MaxNoOfStudents];

 
  return 0;
}