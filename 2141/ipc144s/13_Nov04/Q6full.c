void drawBox(int height, int width, char ch){
   int i;
   int j;
   if (height <= 20 && width <= 70){
      for (i = 0; i < height; i++){
         for (j = 0; j < width; j++){
            putchar(ch);
         }
         putchar('\n');
      }
   }
}