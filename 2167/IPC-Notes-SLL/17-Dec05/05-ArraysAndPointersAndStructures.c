#include <stdio.h>
struct Mark {
   char name[21];
   double value;
};
int main() {
   struct Mark a[4] = { {"IPC",10.3},{"OOP",20.4},{"EAC",30.5},{"ULI",40} };
   struct Mark* p = a;
   int i; 
   printf("Sizeof double is %u\n", sizeof(struct Mark));
   printf("%u\n", a);
   printf("%u\n", &a[0]);
   printf("%u\n", &a[1]);
   for (int i = 0; i < 4; i++, p++) {
      printf("Using array name-(*%u): %s, %0.2lf   ", &a[i], a[i].name, a[i].value);
      printf("Using a pointer to the array - (*%u): %s, %0.2lf\n", p, p->name, p->value);
   }
   return 0;
}