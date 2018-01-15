#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fardad.h"

/*
a = a * b;

char    *
p;
char* p;
English: char pointer p

*a = *c * *d;
English: targetOf a = targetOf c * targetOf d

*/

struct PhoneNumber {
  int number;
  char name[20];
};
int main(void) {
  int i = 100;
  double d = 200.34;
//  int pointer ip = addressOf i;
  int* ip = &i;
//  double pointer dp = addressOf d;
  double* dp = &d;
  struct PhoneNumber p = { 4165552323, "John Doe" };
//  struct PhoneNumber pointer php = addressOf p;
  struct PhoneNumber* php = & p;

  printf("i has the value %d and starts in memroy at address %u\n", i, ip);
  printf("d has the value %lf and starts in memroy at address %u\n", d, dp);
  
  printf("Phone number pointed by php is: %d\n", p.number);
  //  printf("Phone number pointed by php is: %d\n", php pointingTo number);
  printf("Phone number pointed by php is: %d\n", php->number);

//  targetOf ip = 234;
  *ip = 234;
//  targetOf dp = 456.789;
  *dp = 256.789;
  printf("i has the value %d and starts in memroy at address %u\n", i, ip);
  printf("d has the value %lf and starts in memroy at address %u\n", d, dp);

  return 0;
}
