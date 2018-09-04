#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

char menu(void) {
  char option;
  char newline;
  printf(
    "A- Add entry\n"
    "V- Show Values\n"
    "S- Show Sum\n"
    "X- Exit\n"
    "> "
  );
  scanf("%c%c", &option, &newline);
  if (newline != '\n') {
    flushKeyboard();
    option = 'g';
  }
  return option;
}

#define SIZE 3

int main(void) {
  char option;
  double values[SIZE];
  int numOfValues = 0;
  int i;
  double sum;
  do {
    option = menu();
    switch(option) {
    case 'a':
    case 'A':
      printf("Data Entry\n=============\n");
      if (numOfValues < SIZE) {
        printf("Values[%d]: ", numOfValues);
        values[numOfValues] = getDouble();
        numOfValues++;
      }
      else {
        printf("Array if full\n");
      }
      break;
    case 'V':
    case 'v':
      printf("Entered values:\n\n");
      for (i = 0; i < numOfValues; i++) {
        printf("%d: %.2lf\n", i+1, values[i]);
      }
      printf("\n");
      // show all 
      break;
    case 's':
    case 'S':
      sum = 0.0;
      for (i = 0; i < numOfValues; i++) {
        sum +=  values[i];
      }
      printf("Sum of values is %.2lf\n", sum);
      // show sum
      break;
    case 'x':
    case 'X':
      option = 'x';
      // exits
      break;
    default:
      printf("Invlid selection\n");
      break;
    }
  } while (option != 'x');
  printf("Goodbye!\n");
  return 0;
}