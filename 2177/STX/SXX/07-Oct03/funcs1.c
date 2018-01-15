#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sayHello(void) {
  printf("Hello!\n");
}

int main(void) {
  int timesHello;
  int cnt;
  printf("How many times should I say hello? ");
  scanf("%d", &timesHello);
  for (cnt = 0; cnt < timesHello; cnt++) {
    sayHello();
  }
  return 0;
}