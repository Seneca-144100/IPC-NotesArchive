#include <stdio.h>
double min(double a, double b){
   double min = a;
   if (a > b) min = b;
   return min;
}

double min(double a, double b){
   return a < b ? a : b;
}
