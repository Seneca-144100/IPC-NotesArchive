#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MINAGE 18
#define MAXAGE 75
#define NUM 5
//const int MINAGE = 18; // or this if you like!


int main(void) {
  int age;
  int cnt;
  int lowestAge = MAXAGE;
  int highestAge = MINAGE;

  for (cnt = 0; cnt < NUM; cnt++) {
    printf("Please enter you age: ");
    scanf("%d", &age);
    while (age < MINAGE || age >= MAXAGE) {
      printf("Invalid age, valid values are between, %d and %d: ", MINAGE, MAXAGE);
      scanf("%d", &age);
    }
    if (age < lowestAge) {
      lowestAge = age;
    }
    if (age > highestAge) {
      highestAge = age;
    }
  }
  printf("youngest applicant was %d yeaers old, while oldest applicat was %d years old.\n", lowestAge, highestAge);

  return 0;
}