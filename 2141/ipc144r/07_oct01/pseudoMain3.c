#include <stdio.h>
void getMarks(int* ipcPointer, int* iosPointer, int* uliPointer, 
                                int* apcPointer, int* eacPointer);
int getMark();
int stopEntry();
void prnStat(int ipcAver, int iosAver, int uliAver, int apcAver, int eacAver);
void bar(int markAver);
int main(){
   int
      ipc,
      ios,
      uli,
      apc,
      eac,
      ipcAver=0,
      iosAver=0,
      uliAver=0,
      apcAver=0,
      eacAver=0,
      done = 0,
      cnt = 0;  // counting entries
   while (!done){
      getMarks(&ipc, &ios, &uli, &apc, &eac);
      cnt++;
      ipcAver += ipc;
      apcAver += apc;
      uliAver += uli;
      iosAver += ios;
      eacAver += eac;
      done = stopEntry();
   }
   ipcAver = ipcAver / cnt;
   iosAver /= cnt;
   uliAver /= cnt;
   apcAver /= cnt;
   eacAver /= cnt;
   prnStat(ipcAver, iosAver, uliAver, apcAver, eacAver);
   return 0;
}
void getMarks(int* ipcPtr, int* iosPtr, int* uliPtr, int* apcPtr, int* eacPtr){
   int
      ipc;
   printf("Enter IPC mark: ");
   ipc = getMark();
   *ipcPtr = ipc;
   printf("Enter IOS mark: ");
   *iosPtr = getMark();
   printf("Enter ULI mark: ");
   *uliPtr = getMark();
   printf("Enter APC mark: ");
   *apcPtr = getMark();
   printf("Enter EAC mark: ");
   *eacPtr = getMark();
}

int getMark(){
   int 
      mark;
   char
      newline = 0;  /* to make sure newline is entered right after the mark value*/
   do{
      fflush(stdin);
      scanf("%d%c", &mark, &newline);
      if (newline != '\n'){
         printf("Invalid entry, try again: ");
      }
      else if (mark < 0 || mark > 100){ /* invalid mark value*/
         printf("Invalid mark, try values between 0 and 100: ");
      }
   } while (newline != '\n' || (mark < 0 || mark > 100));
   return mark;
}

int stopEntry(){
   int 
      stop = 0;
   char
      response;
   char
      newline = 0;
   printf("Stop entry? (y/n): ( )\b\b");
   do{
      fflush(stdin);
      scanf("%c%c", &response, &newline);
      if (newline != '\n'){
         printf("Invalid entry, try again (y/n) ( )\b\b");
      }
   } while (newline != '\n');
   if (response == 'y' || response == 'Y'){
      stop = 1;
   }
   return stop;
}

void prnStat(int ipcAver, int iosAver, int uliAver, int apcAver, int eacAver){
   printf("IPC: ");
   bar(ipcAver);
   printf("APC: ");
   bar(apcAver);
   printf("ULI: ");
   bar(uliAver);
   printf("IOS: ");
   bar(iosAver);
   printf("EAC: ");
   bar(eacAver);
}

void bar(int markAver){
   int i;
/*   i= 0;
   while (i < markAver / 2){
      putchar('=');
      i++;
   } */
   for (i = 0; i < markAver / 2; i++){
      putchar('=');
   }
   putchar('\n');
}
