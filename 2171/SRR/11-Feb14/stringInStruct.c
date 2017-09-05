#include <stdio.h>
struct Name {
   char first[21];
   char last[31];
};
int main() {
   struct Name N, N2;
   printf("What is first and last name? ");
   scanf("%s %s", N.first, N.last);
   printf("Hello %s %s, I hope you got this!\n", N.first, N.last);
   N2 = N;
   printf("And your name is copied to %s %s.\n", N2.first, N2.last);
   return 0;
}