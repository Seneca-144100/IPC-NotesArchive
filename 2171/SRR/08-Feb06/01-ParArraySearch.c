#include <stdio.h>

int main() {
   int ipc[5] = { 60, 30, 60, 70, 80 };
   int uli[5] = { 50, 70, 100, 90, 100 };
   int apc[5] = { 70,100,88,99,70 };
   int cpr[5] = { 80, 60 , 50,90,90 };
   int stno[5] = { 123, 234, 345, 456, 567 };
   int i = 0;
   int stn;
   int found = -1;
   printf("Pleaes enter a student number: ");
   scanf("%d", &stn);
   for (i = 0; i < 5 && found == -1; i++) {
      if (stno[i] == stn) {
         found = i;
      }
   }
   if (found != -1) {
      printf("Stno    IPC   ULI   APC   CPR\n");
      printf("%d     %3d   %3d   %3d   %3d \n", stno[found], ipc[found], uli[found], apc[found], cpr[found]);
   }
   else {
      printf("Student number not found!\n");
   }
   return 0;
}