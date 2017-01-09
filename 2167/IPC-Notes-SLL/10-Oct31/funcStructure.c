
#include <stdio.h>
struct Student {
   char name[41];
   int stno;
   double ipc;
   double uli;
   double apc;
};
void getStd(struct Student* S) {
   printf("Name: ");
   scanf("%s", S->name);
   printf("Stno: ");
   scanf("%d", &S->stno);
   printf("ipc mark: ");
   scanf("%lf", &S->ipc);
   printf("uli mark: ");
   scanf("%lf", &S->uli);
   printf("apc mark: ");
   scanf("%lf", &S->apc);
}
struct Student getStd2(void) {
   struct Student S;
   printf("Name: ");
   scanf("%s", S.name);
   printf("Stno: ");
   scanf("%d", &S.stno);
   printf("ipc mark: ");
   scanf("%lf", &S.ipc);
   printf("uli mark: ");
   scanf("%lf", &S.uli);
   printf("apc mark: ");
   scanf("%lf", &S.apc);
   return S;
}
void prnStd(const struct Student* S) {
   printf("Student Information\n");
   printf("Name: ");
   printf("%s\n", S->name);
   printf("Stno: ");
   printf("%d\n", S->stno);
   printf("ipc mark: ");
   printf("%.2lf\n", S->ipc);
   printf("uli mark: ");
   printf("%.2lf\n", S->uli);
   printf("apc mark: ");
   printf("%.2lf\n", S->apc);
}
int main(void) {
   struct Student S;
   getStd(&S);
   prnStd(&S);
   return 0;
}
