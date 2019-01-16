#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
struct Package {
   double width;
   double height;
   double length;
};

struct Package getPackage(void);
void prnPackage(struct Package P);
int main(void) {
   struct Package myPac;
   myPac = getPackage();
   prnPackage(myPac);
   return 0;
}
struct Package getPackage(void) {
   struct Package P;
   printf("Please enter package dimensions: \n");
   printf("width: ");
   P.width = getDouble();
   printf("height: ");
   P.height = getDouble();
   printf("length: ");
   P.length = getDouble();
   return P;
}
void prnPackage(struct Package P) {
   printf("Package dimensions:");
   printf("%.1lf X %.1lf X %.1lf\n", P.height, P.length, P.width);
}