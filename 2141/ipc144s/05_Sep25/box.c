#include <stdio.h>
void drawBox(int height, int width);
void drawLine(int width);
int main(){
   int
      w,   /* width */
      h;   /* height*/
   printf("To draw a box, please enter the width and height:\n");
   printf("width: ");
   scanf("%d", &w);
   if (w > 78){
      printf("width can not be more than 78\n");
   }
   else{
      printf("height: ");
      scanf("%d", &h);
      if (h > 20){
         printf("Height can not be more than 20\n");
      }
      else{
         drawBox(h, w);
      }
   }
   return 0;
}



void drawBox(int h, int w){
   int
      i = 0;
   while (i < h){
      drawLine(w);
      i++;
   }
}
void drawLine(int w){
   int
      i = 0;
   while (i < w){
      putchar('*');
      i++;
   }
   putchar('\n');
}