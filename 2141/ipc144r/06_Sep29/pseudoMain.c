#include <stdio.h>
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
      getMarks();
      cnt++;
      done = !doContinue();
   }
   ipcAver = ipcAver / cnt;
   iosAver /= cnt;
   uliAver /= cnt;
   apcAver /= cnt;
   eacAver /= cnt;
   prnStat();
   return 0;
}