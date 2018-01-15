#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct PhoneNumber {
  int number;
  char name[20];
};
struct PhoneNumber getPhoneRec() {
  struct PhoneNumber p;
  printf("Please enter phone record:");
  printf("Name: ");
  scanf("%s", p.name);
  printf("Number: ");
  scanf("%d", &p.number);
  return p;
}
void readPhoneRec(struct PhoneNumber* php) {
  printf("Please enter phone record:");
  printf("Name: ");
  scanf("%s", php->name);
  printf("Number: ");
  scanf("%d", &php->number);
}
//void prnPhoneNumber(struct PhoneNumber ph) {
//  printf("name: %s, number: %d\n", ph.name, ph.number);
//}
void prnPhoneNumber(const struct PhoneNumber* ph) {
  printf("name: %s, number: %d\n", ph->name, ph->number);
  //ph->number = 234; results in an error, since ph is constant
}
//void readValues(int* ip, double* dp) {
//  int v;
//  double dv;
//  printf("Enter an int and a double: ");
//  scanf("%d %lf", &v, &dv);
//  *ip = v;
//  *dp = dv;
//}
void readValues(int* ip, double* dp) {
  printf("Enter an int and a double: ");
  scanf("%d %lf", ip, dp);
}

int main(void) {
  int i;
  double d;
  struct PhoneNumber ph;
  readValues(&i, &d);
  printf("int: %d, double: %lf\n", i, d);
  getPhoneRec(&ph);
  prnPhoneNumber(&ph);
  return 0;
}