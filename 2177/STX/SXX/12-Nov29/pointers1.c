#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fardad.h"

/*
a = b * c;

int * p;
English: int pointer p

*x = *y * *z;
target of x set to targer of y multiply by targer of z

*/





struct PhoneNumber {
  int number;
  char name[20];
};
int main(void) {
  int i = 100;
  double d = 200.34;
  struct PhoneNumber p = { 5552323, "John Doe" };
//  int pointer ip = addressOf i;
  int* ip = &i;
//  double pointer dp = addressOf d;
  double* dp = &d;
//  struct PhoneNumber pointer php = addressOf p;
  struct PhoneNumber* php = &p;

  printf("i has the value %d and starts in memroy at address %u\n", i, ip);
  printf("d has the value %lf and starts in memroy at address %u\n", d, dp);
  printf("i has the value %d and starts in memroy at address %u\n",
    *ip, ip);
  printf("d has the value %lf and starts in memroy at address %u\n",
    *dp, dp);
  printf("name: %s  number: %d\n", p.name, p.number);
//  printf("name: %s  number: %d\n", php pointingTo name, php pointingTo number);
  printf("name: %s  number: %d\n", php->name, php->number);

  return 0;

}