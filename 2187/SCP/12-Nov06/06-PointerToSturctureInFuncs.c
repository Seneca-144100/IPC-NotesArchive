
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Name {
   char first[21];
   char middle[21];
   char last[31];
};
struct CellAccount {
   struct Name name;
   int areaCode;
   int phoneNumber;
   double perMinPrice;
   int usage[31];
};

void prnName(const struct Name* N);
void getName(struct Name* nptr);
int main(void) {
   struct Name nm;
   printf("Please enter you name:\n");
   getName(&nm);
   printf("Hello ");
   prnName(&nm);
   putchar('\n');

   return 0;
}
void getName(struct Name* p) {
   printf("First name: ");
   scanf("%20s", (*p).first);
   printf("Middle name: ");
   scanf("%20s", p->middle);
   printf("Last name: ");
   scanf("%30s", p->last);
}
void prnName(const struct Name* N) {
   printf("%s %s %s", N->first, N->middle, N->last);
}



