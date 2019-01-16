#include "cell_account.h"
#include "myIO.h"
struct Name getName(void) {
  struct Name N;
  printf("First name: ");
  getStr(N.first, 15);
  printf("Last name: ");
  getStr(N.last, 20);
  return N;
}

void getPhoneNumber(struct PhoneNumber* p) {
  char newline;
  int bad;
  int scanRes;
  printf("Phone number: ");
  do {
    bad = 0;  // no error yet;
  // 705-3456789a;sldkfgja;
    scanRes = scanf("%d-%d%c", &p->area, &p->number, &newline);
    if (scanRes != 3 || newline != '\n') {
      flushKeyboard();
      bad = 1;
      printf("Bad format, enter as follows : [999-9999999], retry : ");
    }
    else {
      if (p->area < 100 || p->area > 999) {
        bad = 1;
        printf("Area code must be 3 digits, retry: ");
      }
      else if (p->number < 100000 || p->number > 9999999) {
        bad = 1;
        printf("Phone number must be 7 digits, retry: ");
      }
    }
  } while (bad);
}
void getAccountInfo(struct AccountInfo* ap) {
  printf("Accoutn information Entry:\n");
  ap->owner = getName();
  getPhoneNumber(&ap->cellNo);
  printf("Plan Monthly Payment: ");
  ap->planPrice = getLimitedDouble(0.05, 200.0);
  printf("Rate/minute: ");
  ap->rate = getLimitedDouble(0.05, 5);
  printf("Free Montly minutes (-1 for unlimited): ");
  ap->freeMinutes = getLimitedInt(-1, 4000);
}
void printAccountInfo(const struct AccountInfo* ap) {
  printf("%-20s %-15s | %d-%d | %6.2lf | %4.2lf | %4d\n",
    ap->owner.last, ap->owner.first, ap->cellNo.area, ap->cellNo.number,
    ap->planPrice, ap->rate, ap->freeMinutes);
}
