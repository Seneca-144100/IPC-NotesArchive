#include <stdio.h>
int strLen(const char str[]);
void strCpy(char* des,const char* src);
int main(void) {
   char name[61];
   char name2[61];
   printf("Please enter your name: ");
   scanf("%[^\n]", name);
   strCpy(name2, name);
   printf("Hello %s, you name is %d, characters long.\n", name2, strLen(name2));
   return 0;
}

void strCpy(char* des, const char* src) {
   int i;
   for (i = 0;src[i];i++) {
      des[i] = src[i];
   }
   des[i] = NULL;
}
int strLen(const char str[]) {
   int len = 0;
//   for (len = 0;str[len];len++);
   while(str[len] != NULL) {
      len++;
   }
   return len;
}
