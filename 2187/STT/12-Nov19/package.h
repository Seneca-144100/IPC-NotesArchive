#ifndef SICT_PACKAGE_H__
#define SICT_PACKAGE_H__


#include <stdio.h>
struct Package {
   char name[21];
   int width;
   int length;
   int height;
   double weight;
};

int ReadPackage(FILE* fptr, struct Package* p);
void printPackageInfo(const struct Package* p);
void header(void);
#endif // !SICT_PACKAGE_H__
