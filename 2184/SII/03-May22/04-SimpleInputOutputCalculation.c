#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double width;
  double hieght; 
  double area;
  printf("Please enter the width of the rectangle: ");
  scanf("%lf", &width);
  printf("Please enter the height of the rectangle: ");
  scanf("%lf", &hieght);
  area = width * hieght;
  printf("The area of the rectangle is: %lf\n", area);
  return 0;
}