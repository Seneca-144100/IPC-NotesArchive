#include "cell_account.h"

int main(void) {
  struct AccountInfo ai;
  getAccountInfo(&ai);
  printAccountInfo(&ai);
  return 0;
}