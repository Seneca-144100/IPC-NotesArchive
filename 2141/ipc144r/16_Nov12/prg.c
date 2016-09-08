#include <stdio.h>
int main(){
   int i;
   int num1, num2;
   char str[50];
   FILE* myfile;
   FILE* outfile;
   myfile = fopen("recs.txt", "rt");
   outfile = fopen("list.txt", "wt");
   for (i = 0; i < 10; i++){
      fscanf(myfile, "%s %d %d", str, &num1, &num2);
      printf("%-20s, %6d, %6d\n", str, num1, num2);
      fprintf(outfile, "%-20s, %6d, %6d\n", str, num1, num2);
   }
   fclose(myfile);
   fclose(outfile);
   return 0;
}

