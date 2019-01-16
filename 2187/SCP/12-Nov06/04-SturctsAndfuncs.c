
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
struct Name getName(void);
int main(void) {
   struct Name nm;
   printf("Please enter you name:\n");
   nm = getName();
   printf("Hello ");
   prnName(nm);
   putchar('\n');

   return 0;
}
struct Name getName(void) {
   struct Name ret;
   printf("First name: ");
   scanf("%20s", ret.first);
   printf("Middle name: ");
   scanf("%20s", ret.middle);
   printf("Last name: ");
   scanf("%30s", ret.last);
   return ret;
}
void prnName(struct Name N) {
   printf("%s %s %s", N.first, N.middle, N.last);
}



