#include <stdio.h>
struct Name {
   char first[21];
   char last[41];
};
struct Name getName() {
   struct Name N;
   printf("Please enter first and last name: ");
   scanf("%s %s", N.first, N.last);
   return N;
}
void prnName(struct Name N) {
   printf("%s %s", N.first, N.last);
}
void welcome(struct Name N) {
   printf("Welcome ");
   prnName(N);
   putchar('\n');
}
int main(void) {
   struct Name guest;
   guest = getName();
   welcome(guest);
   return 0;
}