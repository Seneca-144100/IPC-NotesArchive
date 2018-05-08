#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
  char name1[41];
  char name2[41];
  printf("Enter Two names, comma separated;\n> ");
  scanf("%[^,],%[^\n]", name1, name2);
  if (strcmp(name1, name2) == 0) {
    printf("The names are the same!\n");
  }
  else if (strcmp(name1, name2) < 0) {
    printf("%s comes before %s in dictionary!\n", name1, name2);
  }
  else { // for sure strcmp(name1, name2) > 0
    printf("%s comes before %s in dictionary!\n", name2, name1);
  }

  return 0;
}