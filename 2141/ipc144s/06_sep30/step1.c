#include <stdio.h>
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
      getStMarks();
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
