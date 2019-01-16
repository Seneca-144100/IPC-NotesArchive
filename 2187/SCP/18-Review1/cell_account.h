#ifndef ICT_CELL_ACCOUNT_H__
#define ICT_CELL_ACCOUNT_H__

struct Name {
  char first[16];
  char last[21];
};

struct  PhoneNumber {
  int area;
  int number;
};

struct AccountInfo {
  struct Name owner;
  struct PhoneNumber cellNo;
  double rate;   // dollars
  double planPrice; // dollars
  int freeMinutes; // -1 for unlimited up to 200
};

struct Name getName(void);
void getPhoneNumber(struct PhoneNumber* PhoneNumberPointer);
void getAccountInfo(struct AccountInfo* AccountInfoPointer);
void printAccountInfo(const struct AccountInfo* theAccountPointer);

#endif