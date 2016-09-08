
#include <stdio.h>
void keyflush(){
   char
      ch;
   do{
      ch = getchar();
   } while (ch != '\n');
}
int main(){
   int
      a,
      b;
   char
      c;
   printf(">");
   scanf("%d", &a);
   keyflush();
   scanf("%d", &b);
   keyflush();
   scanf("%c", &c);
   keyflush();
   printf("%d-%d-%c-\n", a, b, c);
   return 0;
}