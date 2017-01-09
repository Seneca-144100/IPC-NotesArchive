#include <stdio.h>
int main() {
   char name[21];
   int age; 
   scanf("%s", name);
   while (getchar() != '\n');
   printf("Please enter your age: ");
   scanf("%d", &age);
   printf("You are %s, and you are %d years old!\n", name, age);
   return 0;
}

/*
Fardad\n50\n
Fardad Soley\n50\n
 Soley\n50\n
*/