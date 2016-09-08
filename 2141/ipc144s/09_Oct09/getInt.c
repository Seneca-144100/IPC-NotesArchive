
#include <stdio.h>
void flushKeyb();
int getInt(int lowerLimit, int upperLimit);
int main(){
   int v;
   v = getInt(18, 120);
   printf("you have entered: %d\n", v);
   return 0;
}
int getInt(int lower, int upper){
   int 
      value,
      done = 0;
   char
      nl = ' ';
   while (!done){
      printf("enter int between %d and %d: ",
         lower, upper);
      scanf("%d%c", &value, &nl);
      if (nl != '\n'){  // because nl is not newline char, 
                        // it means there are leftover chars from
                        // user entry in keyboard that 
                        // must be cleared
         flushKeyb();
         printf("Invalid integer, ");
      }
      else if (value < lower){
         printf("Not less than %d, ", lower);
      }
      else if (value > upper){
         printf("not more than %d, ", upper);
      }
      else{
         done =1;
      }
   }
   return value;
}


void flushKeyb(){
   char
      ch;
   do{
      ch = getchar();
   } while (ch != '\n');
}

/* shorter version 
void flushkeyb(){
   while (getchar() != '\n');
}*/