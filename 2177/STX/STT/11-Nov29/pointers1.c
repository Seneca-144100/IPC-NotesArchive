#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fardad.h"


struct PhoneNumber {
  int number;
  char name[20];
};
int main(void) {
  int i = 100;
  double d = 200.34;
  struct PhoneNumber p;
  int pointer ip = addressOf i;
  double pointer dp = addressOf d;
  struct PhoneNumber pointer php = addressOf p;
 
  printf("i has the value %d and starts in memroy at address %u\n", i, ip);
  printf("d has the value %lf and starts in memroy at address %u\n", d, dp);


  printf("i has the value %d and starts in memroy at address %u\n",
    targetOf ip, ip);
  printf("d has the value %lf and starts in memroy at address %u\n", 
    targetOf dp, dp);

  printf("i: %d  ip: %u dp: %u  php: %u\n", i, ip, dp, php);
  i++;
  ip++;
  dp++;
  php++;
  printf("i: %d  ip: %u dp: %u  php: %u\n", i, ip, dp, php);
  return 0;
}
