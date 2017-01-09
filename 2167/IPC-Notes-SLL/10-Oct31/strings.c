
#include <stdio.h>
struct FullName {
   char first[21];
   char last[31];
};
int main(void) {
   struct FullName f1, f2;
   char name[41] = { 'F','a','r','d','a','d','0',0 };
   char name2[41] = "Fardad";
   char str[50];
   printf("%s\n", name);
   name[3] = NULL;  //same as 0
   printf("%s\n", name);
   printf("%s\n", &name[4]);
   printf("Enter your name: ");
   scanf("%s", name2);
   printf("Hello %s, how are you?\n", name2);
   //str = name2; // horrrrrrrrrrrrrible thing to do!;
   printf("Please enter your full name: ");
   scanf("%s %s", f1.first, f1.last);
   f2 = f1;
   printf("hello %s %s, welcome!\n", f2.first, f2.last);
   return 0;
}
