
#include <stdio.h>
void keyflush(){
   char
      ch;
   do{
      ch = getchar();
      //scanf("%c", &ch);
   }while(ch != '\n');
}

int main(){
   int 
      a;
   char
      ch;
   printf("Enter an int: ");
   scanf("%d", &a);
   keyflush();
   printf("Enter a char: ");
   scanf("%c", &ch);
   keyflush();
   printf("int: %d and char: %c\n", a, ch);
   printf("----------------------\n");
   return 0;
}

