#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
struct Package {
   double width;
   double height;
   double length;
};

void getPackage(struct Package* ptr);
void prnPackage(const struct Package* P);
int main(void) {
   struct Package myPac;
   getPackage(&myPac);
   prnPackage(&myPac);
   return 0;
}
void getPackage(struct Package* ptr) {
   printf("Please enter package dimensions: \n");
   printf("width: ");
   (*ptr).width = getDouble();
   printf("height: ");
   ptr->height = getDouble();
   printf("length: ");
   ptr->length = getDouble();
}
void prnPackage(const struct Package* P) {
   printf("Package dimensions:");
   printf("%.1lf X %.1lf X %.1lf\n", P->height, P->length, P->width);
}