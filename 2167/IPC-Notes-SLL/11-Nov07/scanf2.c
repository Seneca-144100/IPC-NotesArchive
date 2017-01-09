#include <stdio.h>
void flushKey(void);
int main() {
   char name[21];
   int age;
   printf("Please enter your name and end it with a dot!\nUp to 10 chars: ");
   scanf("%10[^\n]", name);
   flushKey();
   printf("Please enter your age: ");
   scanf("%d", &age);
   printf("You are %s, and you are %d years old!\n", name, age);
   return 0;
}

void flushKey(void) {
   while (getchar() != '\n');
}
/*
Fardad\n50\n
Fardad Soley\n50\n
Soley\n50\n
*/