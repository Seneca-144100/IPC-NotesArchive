#ifndef ICT_MYIO_H__
#define ICT_MYIO_H__

void flushKeyboard(void);
double getDouble(void);
int getInt(void);
int getLimitedInt(int minValid, int maxValid);
double getLimitedDouble(double minValid, double maxValid);
void getStr(char *str, int len);
int yes(void);

#endif