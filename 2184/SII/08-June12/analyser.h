void title(void);
struct StdMark getStudentInfo(void);
struct PassingRate updatePassingRates(struct PassingRate pr, int mark);
void PrnStudenRecordRow(int row, struct StdMark st);
void PrnStatsResults(struct PassingRate rate, double avr);
struct StdMark {
  int stNo;
  int mark;
  char name[31];
};

struct PassingRate {
  int passed;
  int failed;
  int justPassed;
};