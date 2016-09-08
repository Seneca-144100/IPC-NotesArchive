#include <stdio.h>
// fix this so the top and bottom lines are printed
void drawBox(int height, int width, char ch){
   int i;
   int j;
   if (height <= 20 && width <= 70){
      for (i = 0; i < height; i++){
         for (j = 0; j < width; j++){
            putchar(j == 0 || j == width -1 ? ch: ' ');
         }
         putchar('\n');
      }
   }
}

int main(){
   drawBox(15, 60, 'X');
   return 0;
}