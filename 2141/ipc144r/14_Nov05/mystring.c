#include "mystring.h"

/*int StrLen(char str[]){
   int len = 0;
  // for (len = 0; str[len] != 0; len++);
   while (str[len] != 0){
      len++;
   }
   return len;
}*/
int mystrlen(char str[]){
   int len = -1;
   while (str[++len]);
   return len;
}
