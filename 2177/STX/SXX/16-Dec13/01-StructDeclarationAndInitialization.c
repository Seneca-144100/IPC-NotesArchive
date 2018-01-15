// these go to header file
struct Test {
  char title[41];
  int prog;
  int ques;
  int walk;
};
struct StudentMark {
  double gpa;
  struct Test tst[2];
};
// header file
void getTest(struct Test* tp) {
  printf("Test Title: ");
  scanf("%s", tp->title);
  printf("Prog mark:");
  scanf("%d", &tp->prog);
  printf("ques mark:");
  scanf("%d", &tp->ques);
  printf("walk mark:");
  scanf("%d", &tp->walk);
}


int foo(void) {
  struct StudentMark S = { 4.0, { {"Midterm",4,6,7},{"",0,0,0} } };
  printf("Test Title: ");
  scanf("%s", S.tst[0].title);
  printf("Prog mark:");
  scanf("%d", &S.tst[0].prog);
  printf("ques mark:");
  scanf("%d", &S.tst[0].ques);
  printf("walk mark:");
  scanf("%d", &S.tst[0].walk);
}