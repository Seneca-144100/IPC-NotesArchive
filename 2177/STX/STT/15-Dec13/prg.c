/* this can go to header file*/
struct Test {
  char title[41];
  int ques;
  int prog;
  int walk;
};
struct StudentMark {
  double gpa;
  struct Test tests[3];
};

int getTest(struct Test* tp) {
  printf("Enter the title of the test: ");
  scanf("%s", tp->title);
  printf("Marks for questions: ");
  scanf("%d", &tp->ques);
  printf("Marks for programming: ");
  scanf("%d", &tp->prog);
  printf("Marks for walkthrough: ");
  scanf("%d", &tp->walk);
}



