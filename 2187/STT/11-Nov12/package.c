#include "package.h"

int ReadPackage(FILE* fptr, struct Package* p) {
   return fscanf(fptr, "%[^,],%d,%d,%d,%lf\n", p->name, &p->width, &p->length, &p->height, &p->weight);
}
void printPackageInfo(const struct Package* p) {
   printf("%-20s|%2d|%2d|%2d|%4.1lf\n", p->name, p->width, p->length, p->height, p->weight);
}
void header(void) {
   printf(" Name               |W |L |H |Wght\n");
   printf("====================+==+==+==+====\n");
}
