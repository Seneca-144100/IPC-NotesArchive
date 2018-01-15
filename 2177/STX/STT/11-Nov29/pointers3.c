#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct PhoneNumber {
  int number;
  char name[20];
};

void readPhoneRec(struct PhoneNumber* php) {
  printf("Please enter phone record:");
  printf("Name: ");
  scanf("%s", php->name);
  printf("Number: ");
  scanf("%d", &php->number);
}
struct PhoneNumber getPhoneRec() {
  struct PhoneNumber p;
  printf("Please enter phone record:");
  printf("Name: ");
  scanf("%s", p.name);
  printf("Number: ");
  scanf("%d", &p.number);
  return p;
}


void readValues(int* ip, double* dp) {
  int v;
  double dv;
  printf("Enter an int and a double: ");
  scanf("%d %lf", &v, &dv);
  *ip = v;
  *dp = dv;
}

int main(void) {
  int i;
  double d;
  struct PhoneNumber ph;
  readValues(&i, &d);
  printf("int: %d, double: %lf", i, d);
  readPhoneRec(&ph);
  ph = getPhoneRec();
  return 0;
}
