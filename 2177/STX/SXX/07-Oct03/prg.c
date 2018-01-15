#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sayHello(int timesHello) {
  int cnt;
  for (cnt = 0; cnt < timesHello; cnt++) {
    printf("Hello!\n");
  }
}

int readInt(void) {
  int value;
  scanf("%d", &value);
  return value;
}

int main(void) {
  int num;
  printf("How many times should I say hello? ");
  num = readInt();
  sayHello(num);
  return 0;
}