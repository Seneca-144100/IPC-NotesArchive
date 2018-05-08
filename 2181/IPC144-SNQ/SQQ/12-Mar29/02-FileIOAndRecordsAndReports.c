#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[41];
  int noOfSubs;
  double averNoSubs = 0;
  double gpa;
  double averGpa = 0;

  int i;
  FILE* datafile;
  FILE* dataout;
  datafile = fopen("data.txt", "r");
  dataout = fopen("output.txt", "w");
  if (datafile == NULL || dataout == NULL) {
    printf("Could not open data file!\n");
  }
  else {
    fprintf(dataout, "Row |    Fullname                              |subs| GPA\n");
    fprintf(dataout, "----+------------------------------------------+----+----\n");
    i = 0;
    while(fscanf(datafile, "%[^,],%d,%lf\n", name, &noOfSubs, &gpa) == 3){
      printf("Name: %s\nNo Of Subjects: %d\nGpa: %.1lf\n", name, noOfSubs, gpa);
      fprintf(dataout, "%3d | %-40s | %2d | %3.1lf\n", ++i , name, noOfSubs, gpa);
      averNoSubs += noOfSubs;
      averGpa += gpa;
    }
    averNoSubs = averNoSubs / i;
    averGpa = averGpa / i;
    fprintf(dataout, "---------------------------------------------------------\n");
    fprintf(dataout, "  Aver No Of Subjects per student: %3.1lf, Average Gpa: %3.1lf\n", averNoSubs, averGpa);

  }
  if(datafile) fclose(datafile);
  if(dataout) fclose(dataout);
  return 0;
}