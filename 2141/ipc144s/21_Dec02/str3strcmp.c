#include <string.h>
#include <stdio.h>
int main(){
   char
      str1[81] = "abcdefghijklmnopqrstuvwxyz",
      str2[81] ;

   // if(strcmp(a, b)<0)    (a < b)     
   // if(strcmp(a, b)==0)    (a == b)     
   // if(strcmp(a, b)>0)    (a > b)     

   // if(strncmp(a, b, n)<0)    (a < b)        first n chars of a and b     
   // if(strncmp(a, b, n)==0)    (a == b)     first n chars of a and b
   // if(strncmp(a, b, n)>0)    (a > b)     first n chars of a and b
   return 0;
}