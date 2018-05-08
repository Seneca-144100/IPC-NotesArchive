/*
1 - prompt for the first number
2 - read the firstr number
3 - prompt for the second number
4 - read the second number
5 - multiply the two and keep the resut
6 - print the result

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch;
  printf("Please enter a letter: ");
  scanf("%c", &ch);
  printf("The letter you entered is \'%c\' and the ascii code is: %d\n", ch, ch);
  printf("And the next letter in alphabet is \'%c\'\n", ch + 1);
  // bug mentioned in class, "what if the letter is Z?"
  return 0;
}
