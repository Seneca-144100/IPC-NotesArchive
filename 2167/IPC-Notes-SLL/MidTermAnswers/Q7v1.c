#include <stdio.h>
struct Wallet {
   int b20;  // number of 20 Dollar bills
   int b10;  // number of 10 Dollar bills
   int b5;   // number of 5 Dollar bills
};
int main() {
   struct Wallet p;
   printf("please enter the number of 20, 10 and 5 Dollar bills\nin your wallet, space separated:\n");
   scanf("%d %d %d", &p.b20, &p.b10, &p.b5);
   printf("the total value is: %d Dollars.\n", p.b20 * 20 + p.b10 * 10 + p.b5 * 5);
   return 0;
}
/* output sample
please enter the number of 20, 10 and 5 Dollar bills
in your wallet, space separated :
1 2 3
the total value is : 55 Dollars.
*/