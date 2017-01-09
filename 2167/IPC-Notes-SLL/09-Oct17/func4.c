
#include <stdio.h>
struct Student {
   int stno;
   double ipc;
   double uli;
   double apc;
};
struct Transcript {
   int stno;
};
struct HighLow {
   int high;
   int low;
};
// functions
double StdAverage(struct Student st);
void flushKeybaord(void);
int getInt(void);
double getDouble(void);
int getNoOfStudents(void);
struct Student getStudent(void);
void printStudent(struct Student st);
struct HighLow FindHighLowAverageIndex(struct Student st[], int NoOfStd);


// main function
int main(void) {
   struct Student std[35];
   struct HighLow hlIdx;
   struct Transcript T;
   T.stno;
   std[1].stno
   int NoOfStd;
   int i;
   NoOfStd = getNoOfStudents();
   // data entry
   for (i = 0;i < NoOfStd;i++) {
      std[i] = getStudent();
   }
   //prcessing
   hlIdx = FindHighLowAverageIndex(std, NoOfStd);
   //output
   printf("Highest average:\n");
   printStudent(std[hlIdx.high]);
   printf("Lowest average:\n");
   printStudent(std[hlIdx.low]);
   return 0;
}








struct HighLow FindHighLowAverageIndex(struct Student st[], int NoOfStd) {
   double highVal;
   double lowVal;
   struct HighLow hl; // high and low average indices
   int i;
   highVal = lowVal = StdAverage(st[0]); // average of marks
   hl.low = hl.high = 0;
   for (i = 1;i < NoOfStd;i++) {
      if (highVal < StdAverage(st[i])) {
         highVal = StdAverage(st[i]);
         hl.high = i;
      }
      if (lowVal > StdAverage(st[i])) {
         lowVal = StdAverage(st[i]);
         hl.low = i;
      }
   }
   return hl;
}






void printStudent(struct Student st) {
   printf("studend number: %d\n", st.stno);
   printf("           ipc: %4.1lf\n", st.ipc);
   printf("           uli: %4.1lf\n", st.uli);
   printf("           apc: %4.1lf \n", st.apc);
   printf("       average: %4.1lf\n", StdAverage(st));
}

double StdAverage(struct Student st) {
   double av;
   av = (st.ipc + st.uli + st.apc) / 3;
   return av;
}
void flushKeybaord(void) {
   char ch;
   do {
      scanf("%c", &ch);
   } while (ch != '\n');
}
int getInt(void) {
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
double getDouble(void) {
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
struct Student getStudent(void) {
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