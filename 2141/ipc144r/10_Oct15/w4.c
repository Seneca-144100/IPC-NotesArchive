//4 - determine the exact output of the following program[5 marks]
#include <stdio.h>
int main(void){
   char
      ch = 'a',
      t = 1,
      f = 0;
   do{
      switch (ch){
      case 'u':
         ch = ch - 7;
         break;
      case 'f':
         ch += 15;
         break;
      case 'k':
         ch -= 10;
         break;
      case 'c':
         ch += 6;
         break;
      default:
         f = !f;
         if (f == 0){
            ch = 'y';
            break;
         }
         printf("It is ");
         if (ch % 2 == 0)
            printf("not ");
         else
            printf("very ");
         ch = 'f';
         break;
      case 'y':
         ch -= 12;
      case 'n':
         if (t % 3 != 0){
            t++;
            break;
         }
         ch += 11;
      }
      printf("%c", ch);
   } while (ch != 'y');
   printf(", no?\n");
   return 0;
}
