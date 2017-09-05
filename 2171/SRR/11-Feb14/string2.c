#include <stdio.h>
int main() {
   char name[100];
   int i;
   printf("What is your name? ");
   //scanf("%s", name);
   scanf("%[^\n]", name);
   printf("Hello %s, I hope you got this!\n", name);
   return 0;
}