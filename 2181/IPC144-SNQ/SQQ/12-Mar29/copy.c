#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char fname1[81];
  char fname2[81];
  FILE* datafile;
  FILE* dataout;
  int ch;
  printf("source dest:\n");
  scanf("%s %s", fname1, fname2);
  datafile = fopen(fname1, "r");
  dataout = fopen(fname2, "w");
  if (datafile == NULL || dataout == NULL) {
    printf("Could not open file!\n");
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