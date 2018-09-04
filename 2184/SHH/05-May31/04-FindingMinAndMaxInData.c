#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define NUMS    10
#define MINAGE  20
#define MAXAGE  75

int main(void) {
  int age;
  int averageAge = 0;
  int cnt;
  int lowestAge = MAXAGE;
  int highestAge = MINAGE;
  for (cnt = 0; cnt < NUMS; cnt++) {
    printf("Please enter you age: ");
    scanf("%d", &age);
    while (age < MINAGE || age >= MAXAGE) {
      printf("Invalid age, please enter a value between %d and %d: ", MINAGE, MAXAGE);
      scanf("%d", &age);
    }
    averageAge += age;
    if (age < lowestAge) lowestAge = age;
    if (age > highestAge) highestAge = age;
  }
  printf("youngest applicant was %d yeaers old, while oldest applicat was %d years old.\n", lowestAge, highestAge);
  printf("Average of the age of the applicants is: %d\n", averageAge / NUMS);

  return 0;
}