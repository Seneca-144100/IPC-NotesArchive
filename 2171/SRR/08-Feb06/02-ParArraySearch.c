#include <stdio.h>
struct StudentMarks {
   int stno;
   int ipc;
   int uli;
   int apc;
   int cpr;
};


int main() {
   struct StudentMarks  S[5] = { {123, 40, 60, 70, 80}, {234, 90, 80, 80, 70}, {345,67,87,78,67}, {456,45,90,89,78},{567,56,89,87,76}};
   struct StudentMarks sm;
   int i = 0;
   int found = 0;
   printf("Pleaes enter a student number: ");
   scanf("%d", &sm.stno );
   for (i = 0; i < 5; i++) {
      if (S[i].stno == sm.stno ) {
         sm = S[i];
         found = 1;
      }
   }
   if (found) {
      printf("Stno    IPC   ULI   APC   CPR\n");
      printf("%d     %3d   %3d   %3d   %3d \n", sm.stno, sm.ipc, sm.uli, sm.apc, sm.cpr);
   }
   else {
      printf("Student number not found!\n");
   }
   return 0;
}