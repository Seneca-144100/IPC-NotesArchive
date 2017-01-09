#include <stdio.h>
struct Mark {
   char name[21];
   double value;
};
struct Test {
   char stName[41];
   struct Mark stMark;
   int noOfQues;
};
int main() {
   struct Test a[4] = { 
      {"Fred", {"IPC",10.3},10},
      {"Jack",{"OOP",20.4},5},
      {"John", {"EAC",30.5},8},
      {"Joe",{"ULI",40},6} 
   };
   struct Test* p = a;
   int i; 
   printf("Sizeof Test is %u\n", sizeof(struct Test));
   printf("%u\n", a);
   printf("%u\n", &a[0]);
   printf("%u\n", &a[1]);
   for (int i = 0; i < 4; i++, p++) {
      printf("Name-(*%u): %s (%s, %0.2lf), %d   ", 
          &a[i], a[i].stName, a[i].stMark.name,  a[i].stMark.value, a[i].noOfQues);
      printf("Pointer- (*%u): %s (%s, %0.2lf), %d\n", 
         p, p->stName,p->stMark.name, p->stMark.value, p->noOfQues);
   }
   return 0;
}