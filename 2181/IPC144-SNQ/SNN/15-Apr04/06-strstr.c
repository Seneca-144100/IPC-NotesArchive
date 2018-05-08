
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char name[61];
  char substr[21];
  char* loc;
  printf("Enter your name and a string to search for comma separated: ");
  scanf("%[^,],%[^\n]", name, substr);
  loc = strstr(name, substr);
  if (loc) {
    printf("Here is where your substr starts: %s\n", loc);
  }
  else {
    printf("Not found!\n");
  }
  return 0;
}
