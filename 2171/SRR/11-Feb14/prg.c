#include <stdio.h>
struct Subject {
   char code[7];
   int mark;
};
char grade(int mark);
void clearKeys();
int readInt();
struct Subject readSubject();
int readMark();
int readIntbetween(int low, int high);

int readIntbetween(int low, int high) {
   int mark;
   do {
      mark = readInt();
      if (mark < low || mark > high) {
         printf("Invalid vallue (%d<=value<=%d), redo: ", low, high);
      }
   } while (mark < low || mark > high);
   return mark;
}

void SemesterMarks(){
   struct Subject S[6];
   int noOfSubs;
   int i;
   double averOfMarks = 0.0;
   printf("Please enter number of subjects, between 1 and 6: ");
   noOfSubs = readIntbetween(1, 6);
   for (i = 0; i < noOfSubs; i++) {
      S[i] = readSubject();
   }
   for (i = 0; i < noOfSubs; i++) {
      averOfMarks += S[i].mark;
   }
   averOfMarks = averOfMarks / noOfSubs;
   printf("Subject  Mark  Grade\n");
   for (i = 0; i < noOfSubs; i++) {
      printf("%6s   %3d     %c\n", S[i].code, S[i].mark, grade(S[i].mark));
   }
   printf("average is: %.2lf \n", averOfMarks);
   return 0;
}

int main() {
   SemesterMarks();
   return 0;
}

























int readMark() {
   int mark;
   mark  = readIntbetween(0, 100);
   return mark;
}

struct Subject readSubject() {
   struct Subject res;
   printf("Subject Code: ");
   scanf("%s", res.code);
   clearKeys();
   printf("Subject Mark: ");
   res.mark = readMark();
   return res;
}




/*unit test for readSubject
int main() {
   struct Subject S;
   S = readSubject();
   printf("%s: %d that is: %c\n", S.code, S.mark, grade(S.mark));
   return 0;
}

*/



/* unit test for readmark
int main() {
int mark;
mark = readMark();
printf("Mark: %d", mark);
return 0;
}
*/



char grade(int mark) {
   char result;

   if (mark >= 0 && mark <= 100) {
      if (mark >= 80) {
         result = 'A';
      }
      else if (mark >= 70) {
         result = 'B';
      }
      else if (mark >= 60) {
         result = 'C';
      }
      else if (mark >= 50) {
         result = 'D';
      }
      else {
         result = 'F';
      }
   }
   else {
      // mark is bad
      result = 'X';
   }

   return result;
}


void clearKeys() {
   char garbage;
   do {
      garbage = getchar();
   } while (garbage != '\n');
}
int readInt() {
   int res;
   char newline = 0;
   do {
      scanf("%d%c", &res, &newline);
      if (newline != '\n') {
         printf("Invalid value, redo: ");
         clearKeys();
      }
   } while (newline != '\n');
   return res;
}

/* unit test for readInt()
int main() {
   int value;
   value = readInt();
   printf("%d\n", value);
   return 0;
}

*/

/* unit test for grade
int main() {
   char g;
   g = grade(120);
   printf("%c\n", g);
   g = grade(-1);
   printf("%c\n", g);
   g = grade(80);
   printf("%c\n", g);
   g = grade(75);
   printf("%c\n", g);
   g = grade(62);
   printf("%c\n", g);
   g = grade(55);
   printf("%c\n", g);
   g = grade(30);
   printf("%c\n", g);
   return 0;
}
*/