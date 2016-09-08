#include <stdio.h>
void getStMarks(int* ipcPtr, int* apcPtr, int* uliPtr, int* iosPtr, int* eacPtr); \
int getMark();
int stopEntry();
void prnGraph(int ipcAver,int apcAver,int uliAver,int iosAver,int eacAver);
void bar(int markAver);
void myFlush();
int main(){
   int
      ipc,
      apc,
      uli,
      ios,
      eac,
      ipcAver = 0,
      apcAver = 0,
      uliAver = 0,
      iosAver = 0,
      eacAver = 0,
      cnt = 0, /* to count the students*/
      done = 0;
   while (!done){
      printf("Enter marks for student number %d;\n", ++cnt);
      getStMarks(&ipc, &apc, &uli, &ios, &eac);
      ipcAver += ipc;
      apcAver += apc;
      uliAver += uli;
      iosAver += ios;
      eacAver += eac;
      done = stopEntry();
   }
  
   ipcAver /= cnt;
   apcAver /= cnt;
   uliAver /= cnt;
   iosAver /= cnt;
   eacAver /= cnt;
   prnGraph(ipcAver, apcAver, uliAver, iosAver, eacAver);
   return 0;
}
void getStMarks(int* ipcPtr, int* apcPtr, int* uliPtr, int* iosPtr, int* eacPtr){
   printf("IPC: ");
   *ipcPtr = getMark();
   printf("APC: ");
   *apcPtr = getMark();
   printf("ULI: ");
   *uliPtr = getMark();
   printf("IOS: ");
   *iosPtr = getMark();
   printf("EAC: ");
   *eacPtr = getMark();
}
int getMark(){
   int  
      mark;
   char
      newline = 0;
   do{
      scanf("%d%c", &mark, &newline);
      if (newline != '\n'){
         printf("Invalid Entry: ");
         myFlush();
      }
      else if (mark < 0 || mark > 100){
         printf("Invalid mark, values between 0 and 100 please: ");
      }
   } while (newline != '\n' || (mark < 0 || mark > 100));
   return mark;
}
int stopEntry(){
   char
      response,
      newline = 0;
   int
      retValue = 0;
   printf("Stop Entry?(y)es ( )\b\b");
   do{  
      scanf("%c%c", &response, &newline);
      if (newline != '\n'){ /* checking only one character*/
         printf("Invalid Entry, only y for yes please: ( )\b\b");
         myFlush();
      }
      if (response == 'y' || response == 'Y'){
         retValue = 1;
      }
   } while (newline != '\n');
   return retValue;
}
void prnGraph(int ipcAver, int apcAver, int uliAver, int iosAver, int eacAver){
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

void bar(int aver){
   int i;
 /*  i = 0;
   while (i < aver / 2){
      putchar('=');
      i++;
   } */
   for (i = 0; i < aver / 2; i++){
      putchar('=');
   }
   putchar('\n');
}
void myFlush(){
   char
      ch;
   do{
      /*scanf("%c", &ch);*/
      ch = getchar();
   } while (ch != '\n');
   /*
   while(getchar() != '\n');
   */
}











