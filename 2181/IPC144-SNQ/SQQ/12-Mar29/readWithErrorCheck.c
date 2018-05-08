#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void gotoNextLine(FILE* fptr) {
  while (fgetc(fptr) != '\n');
}
int main(void) {
  char name[41];
  int noOfSubs;
  double averNoSubs = 0;
  double gpa;
  double averGpa = 0;
  int done = 0;
  int i;
  int badLines = 0;
  FILE* datafile;
  FILE* dataout;
  datafile = fopen("data.txt", "r");
  dataout = fopen("output.txt", "w");
  if (datafile == NULL) {
    printf("Could not open data file!\n");
  }
  else {
    fprintf(dataout, "Row |    Fullname                              |subs| GPA\n");
    fprintf(dataout, "----+------------------------------------------+----+----\n");
    i = 0;
    while(!done){
      if (fscanf(datafile, "%[^,],%d,%lf\n", name, &noOfSubs, &gpa) == 3) {
        printf("Name: %s\nNo Of Subjects: %d\nGpa: %.1lf\n", name, noOfSubs, gpa);
        fprintf(dataout, "%3d | %-40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
        averNoSubs += noOfSubs;
        averGpa += gpa;
      }
      else {
        gotoNextLine(datafile);
        badLines++;
      }
    }
    averNoSubs = averNoSubs / i;
    averGpa = averGpa / i;
    fprintf(dataout, "---------------------------------------------------------\n");
    fprintf(dataout, "  Aver No Of Subjects per student: %3.1lf, Average Gpa: %3.1lf\n", averNoSubs, averGpa);
    fclose(datafile);
    fclose(dataout);
  }
  return 0;
}