#define MinMark 0
#define MaxMark 100

void title(void);
struct StdMark getStudentMark(void);

struct PassingRate updatePassingRates(struct PassingRate pr,
  int mark);
void PrnStdReportRow(int row, struct StdMark st);
void reportTitle(void);

struct StdMark {
  int mark;
  int StNo;
  char name[41];
};

struct PassingRate {
  int passed;
  int failed;
  int justPassed;
};