#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  FILE* datafile;
  FILE* dataout;
  int ch;
  char fin[81];
  char fout[81];
  printf("Please enter the source and the dests file, space seperated:\n> ");
  scanf("%s %s", fin, fout);
  datafile = fopen(fin, "r");
  dataout = fopen(fout, "w");
  if (datafile == NULL || dataout == NULL) {
    printf("could not open either input or output file!\n");
  }
  else {
    while ((ch = fgetc(datafile)) != EOF) {
      fputc(ch, dataout);
    }
  }
  if(datafile) fclose(datafile);
  if(dataout) fclose(dataout);
  return 0;
}