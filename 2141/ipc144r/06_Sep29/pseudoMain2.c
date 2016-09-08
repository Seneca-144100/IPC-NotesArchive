#include <stdio.h>
void getMarks(int* ipcPointer, int* iosPointer, int* uliPointer, 
                                int* apcPointer, int* eacPointer);
int getmark();
int main(){
   int
      ipc,
      ios,
      uli,
      apc,
      eac,
      ipcAver,
      iosAver,
      uliAver,
      apcAver,
      eacAver,
      done = 0,
      cnt = 0;  // counting entries
   while (!done){
      getMarks(&ipc, &ios, &uli, &apc, &eac);
      cnt++;
      done = stop();
   }
   ipcAver = ipcAver / cnt;
   iosAver /= cnt;
   uliAver /= cnt;
   apcAver /= cnt;
   eacAver /= cnt;
   prnStat();
   return 0;
}
void getMarks(int* pipc, int* pios, int* puli, int* papc, int* peac){
   int
      ipc;
   printf("Enter IPC mark: ");
   ipc = getMark();
   *pipc = ipc;
   printf("Enter IOS mark: ");
   *pios = getMark();
   printf("Enter ULI mark: ");
   *puli = getMark();
   printf("Enter APC mark: ");
   *papc = getMark();
   printf("Enter EAC mark: ");
   *peac = getMark();
}