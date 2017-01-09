#include <stdio.h>
void flushKey(void);
/* 
printf("%PF.DT", Var);
Floating point:
P= "0" or "-" Pad with zero or left justified
F= Field width to print in
D= Digits after decimal, right pad with zero
T= floating point format specifiers
Integers:
P= "0" or "-" Pad with zero or left justified
F= Field width to print in
D= if present and right justifed, pad with zero this many characters
T= Integer format specifiers
Strings:
P= "0" or "-" Pad with zero or left justified
F= Field width to print in
D= Nor present
T= s


*/
int main() {
   printf(">%20lf<\n", 20.1);
   printf(">%20.3lf<\n", 20.1);
   printf(">%-20.3lf<\n", 20.1);
   printf(">%020.3lf<\n", 20.1);
   printf(">%20d<\n", 20);
   printf(">%-20d<\n", 20);
   printf(">%020d<\n", 20);
   printf(">%20.10d<\n", 20);
   printf(">%-20.10d<\n", 20);
   printf(">%20s<\n", "ab");
   printf(">%-20s<\n", "ab");
   printf(">%020s<\n", "ab");

   return 0;
}

void flushKey(void) {
   while (getchar() != '\n');
}
/*
10\n
*/