#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
char menu(void) {
  char option;
  char newline;
  printf(
    "\nA- Add Entry\n"
    "L- List Entries\n"
    "S- Display Sum\n"
    "X- Exit\n"
    "> ");
  scanf("%c%c", &option, &newline);
  if (newline != '\n') {
    flushKeyboard();
    option = 'G';
  }
  return option;
}
#define SIZE 3

int main(void) {
  char selection;
  double values[SIZE];
  int noOfEnt = 0;
  double sum = 0.0;
  int i;
  do {
    selection = menu();
    switch (selection){
    case 'a':
    case 'A':
      if (noOfEnt < SIZE) {
        printf("Add entry:\n");
        printf("values[%d]= ", noOfEnt);
        values[noOfEnt] = getDouble();
        noOfEnt++;
      }
      else {
        printf("Out of memory!\n");
      }
      break;
    case 'l':
    case 'L':
      printf("List of all entries: \n");
      for (i = 0; i < noOfEnt; i++) {
        printf("%d: %.2lf\n",i+1, values[i]);
      }
      line(30, '-');
      break;
    case 's':
    case 'S':
      printf("Sum of all entries: ");
      for (i = 0; i < noOfEnt; i++) {
        sum += values[i];
      }
      printf("%.2lf\n", sum);
      line(30, '-');
      break;
    case 'x':
    case 'X':
      printf("Goodbye!\n");
      selection = 'x';
      break;

    default:
      printf("Invalid Selection, try again:\n");
          break;
    }

  } while (selection != 'x');

  return 0;
}