#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
  char print;
  printf("Do you want to print the line? (y/n): ");
  scanf("%c", &print);
  if (print == 'y') 
  {
    printf("Line printed!\n");
  }
  else
  {
    printf("No line printed!\n");
  }
  printf("Program ended.\n");
  return 0;
}