#include <stdio.h>
void getStMarks(int* ipcPtr, int* apcPtr, int* uliPtr, int* iosPtr, int* eacPtr);
int main(){
   int
      ipc,
      apc,
      uli,
      ios,
      eac,
      ipcAver,
      apcAver,
      uliAver,
      iosAver,
      eacAver,
      cnt = 0, /* to count the students*/
      done = 0;
   while (!done){
      getStMarks(&ipc, &apc, &uli, &ios, &eac);
      ipcAver += ipc;
      apcAver += apc;
      uliAver += uli;
      iosAver += ios;
      eacAver += eac;
      cnt++;
      done = stop();
   }
   ipcAver /= cnt;
   apcAver /= cnt;
   uliAver /= cnt;
   iosAver /= cnt;
   eacAver /= cnt;
   prnGraph();
   return 0;
}
void getStMarks(int* ipcPtr, int* apcPtr, int* uliPtr, int* iosPtr, int* eacPtr){
}