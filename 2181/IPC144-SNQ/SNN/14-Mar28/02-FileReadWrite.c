#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[61];
  int noOfSubs;
  double gpa;
  FILE* datafile;
  FILE* dataout;
  datafile = fopen("data.txt", "r");
  dataout = fopen("output.txt", "a");

  if (datafile == NULL || dataout == NULL) {
    printf("could not open either input or output file!\n");
  }
  else {
    int i=0;
 //   printf("Please enter the name, number subject taken and the GPA, comma seperated.\n: ");
    //: Fred Soley, 3, 2.8<ENTER>
    fprintf(dataout, "Row |    Fullname                              |subs| GPA\n");
    fprintf(dataout, "----+------------------------------------------+----+----\n");
    while(fscanf(datafile, "%[^,],%d,%lf\n", name, &noOfSubs, &gpa) == 3) {
      printf("Name: %s\nNo Of Subjects: %d\nGpa: %.1lf\n", name, noOfSubs, gpa);
      fprintf(dataout, "%3d | %-40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
   //   1 | Homer Simpson | 3 | 3.4

   /*   fprintf(dataout, "%3d | %40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
   >  1 |                            Homer Simpson |  3 | 3.4
   */
   /*   fprintf(dataout, "%-3d | %-40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
   >1   | Homer Simpson                            |  3 | 3.4
   */
   /*   fprintf(dataout, "%03d | %-40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
   >001 | Homer Simpson                            |  3 | 3.4
   */
   /*   fprintf(dataout, "%-03d | %-40s | %2d | %3.1lf\n", ++i, name, noOfSubs, gpa);
   -03d does not make sense since if it is left justified, 
   then there will never be a space to be filled with 0
   >1   | Homer Simpson                            |  3 | 3.4
   */
   /*   fprintf(dataout, "%3.2d | %-40s | %2d | %3.1lf\n",++i, name, noOfSubs, gpa);
   > 01 | Homer Simpson                            |  3 | 3.4
   */

    }
  }
  if(datafile) fclose(datafile);
  if(dataout) fclose(dataout);
  return 0;
}