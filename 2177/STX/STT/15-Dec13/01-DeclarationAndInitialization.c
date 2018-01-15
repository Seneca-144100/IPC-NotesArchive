/* this can go to header file*/
struct Test {
  int ques;
  int prog;
  int walk;
};
struct StudentMark {
  double gpa;
  struct Test tests[3];
};

/* header file*/

/* here is you C code in a .c file*/

int foo(void) {
  struct StudentMark sm = { 4.0,{{0,1 ,0 } ,{0, 0,0} ,{0,0,0} } };
  char name[40] = "";
 /* bad ones char name[40] = { '\0' }; 
  char name[40] = { 0 };
  */
  char name[40] = "abc";
  char name[40] = {'a','b','c','\0'};

}