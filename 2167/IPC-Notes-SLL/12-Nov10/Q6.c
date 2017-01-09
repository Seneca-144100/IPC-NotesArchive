#include <stdio.h>
struct Student {
   char name[21];
   int stNo;
   int marks[5];
};
/*
| Name               | Stdnt No  | M1  | M2  | M3  | M4  | M5  |  Avrg  |
1234567890123456789012345678901234567890123456789012345678901234567890123
         1         2         3         4         5         6         7
BAR
Name 20 chars left justified
BAR SPACE
Studnet number 9 digits, pad left with zeros
SPACE BAR
Mark 1 to mark 5: SPACE 3 digits SPACE BAR
SPACE
Average: double in 6 spaces with 2 digits after decimal point (i.e 100.00)
SPACE BAR NEWLINE
*/
void prnTitle(void) {
   printf("| Name               | Stdnt No  |  M1 |  M2 |  M3 |  M4 |  M5 |  Avrg  |\n");
}
void prnStudent(const struct Student *p) {
   int i;
   double av = 0;
   printf("|%-20s| %09d | ", p->name, p->stNo);
   for (i = 0;i < 5;i++) {
      printf("%3d | ", p->marks[i]);
      av += p->marks[i];
   }
   av = av / 5;
   printf("%6.2lf |\n", av);
}
int main() {
   struct Student S = { "Fred Soley", 42901941, {67,34,88,97,100} };
   prnTitle();
   prnStudent(&S);
   return 0;
}