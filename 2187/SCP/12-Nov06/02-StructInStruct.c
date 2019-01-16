
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
int main(void) {
   struct CellAccount C = { {"Fred", "", "Soley"}, 416, 5551234, 0.25, {12,34,12,56,88} };
   struct CellAccount D = { {"","", ""}, 0, 0, 0.0, {0} };
   struct CellAccount CA[100] = { { {"","", ""}, 0, 0, 0.0, {0} } };
   D.name = C.name;
   return 0;
}



