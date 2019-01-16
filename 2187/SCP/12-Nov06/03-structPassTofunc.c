
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

void prnName(struct Name N);

int main(void) {
   struct Name myName = { "Fred", "Jim", "Soley" };
   printf("Hello ");
   prnName(myName);
   putchar('\n');

   return 0;
}

void prnName(struct Name N) {
   printf("%s %s %s", N.first, N.middle, N.last);
}



