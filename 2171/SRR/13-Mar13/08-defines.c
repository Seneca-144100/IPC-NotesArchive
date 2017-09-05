#include <stdio.h>
#define NamePointer struct Name*
#define TAX 0.13
#define PI 3.14159265


struct Name {
   char first[21];
   char last[41];
};
void getName(NamePointer p) {
   printf("Please enter first and last name: ");
   scanf("%s %s", p->first, p->last);
}
void prnName(NamePointer p) {
   printf("%s %s", p->first, p->last);
}
void welcome(NamePointer p) {
   printf("Welcome ");
   prnName(p);
   putchar('\n');
}
int main(void) {
   struct Name guest;
   getName(&guest);
   welcome(&guest);
   return 0;
}