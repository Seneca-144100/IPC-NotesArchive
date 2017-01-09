
#include <stdio.h>
struct Student {
   int stno;
   double ipc;
   double uli;
   double apc;
};
// functions
double StdAverage(struct Student st);
void flushKeybaord();
int getInt();
double getDouble();
int getNoOfStudents(void);
struct Student getStudent();
void printStudent(struct Student st);

// main function
int main(void) {
   struct Student S;
   struct Student std[35];
   int NoOfStd;
   int i;
   int highIndex;
   int lowIndex;
   double highVal;
   double lowVal;
   /*S.stno = 0;
   std[5].stno = 123;*/
   NoOfStd = getNoOfStudents();
   // data entry
   for (i = 0;i < NoOfStd;i++) {
      std[i] = getStudent();
   }
   //prcessing
   highVal = lowVal = StdAverage(std[0]); // average of marks
   highIndex = lowIndex = 0;
   for (i = 1;i < NoOfStd;i++) {
      if (highVal < StdAverage(std[i])) {
         highVal = StdAverage(std[i]);
         highIndex = i;
      }
      if (lowVal > StdAverage(std[i])) {
         lowVal = StdAverage(std[i]);
         lowIndex = i;
      }
   }
   // output
   // printStudent(st[highIndex);
   printf("Highest average:\n");
   printStudent(std[highIndex]);
   printf("Lowest average:\n");
   printStudent(std[lowIndex]);
   return 0;
}

void printStudent(struct Student st) {
   printf("studend number: %d\n", st.stno);
   printf("           ipc: %4.1lf\n", st.ipc);
   printf("           uli: %4.1lf\n", st.uli);
   printf("           apc: %4.1lf \n", st.apc);
   printf("       average: %4.lf\n", StdAverage(st));
}

double StdAverage(struct Student st) {
   double av;
   av = (st.ipc + st.uli + st.apc) / 3;
   return av;
}
void flushKeybaord() {
   char ch;
   do {
      scanf("%c", &ch);
   } while (ch != '\n');
}
int getInt() {
   int val;
   int res;
   do {
      res = scanf("%d", &val);
      if (res != 1) {
         printf("Invalid entry, retry: ");
         flushKeybaord();
      }
   } while (res != 1);
   flushKeybaord();
   return val;
}
double getDouble() {
   double val;
   int res;
   do {
      res = scanf("%lf", &val);
      if (res != 1) {
         printf("Invalid entry, retry: ");
         flushKeybaord();
      }
   } while (res != 1);
   flushKeybaord();
   return val;
}
int getNoOfStudents(void) {
   int NoOfStd;
   do {
      printf("Please enter the number of students(less than 36): ");
      NoOfStd = getInt();
      if (NoOfStd > 35 || NoOfStd < 1) {
         printf("Invalid entry, ");
      }
   } while (NoOfStd > 35 || NoOfStd < 1);
   return NoOfStd;
}
struct Student getStudent() {
   struct Student s;
   printf("Std No: ");
   s.stno = getInt();
   printf("Please enter the marks:\n");
   printf("ipc: ");
   s.ipc = getDouble();
   printf("uli: ");
   s.uli = getDouble();
   printf("apc: ");
   s.apc = getDouble();
   return s;
}