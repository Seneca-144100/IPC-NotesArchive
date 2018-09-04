#include <string.h>
#include "analyser.h"


int main(void) {
  struct StdMark st;
  struct StdMark st[100] = { { 0, 0, "Fardad" },{ 10, 10, "Fardood" } };
  struct StdMark std = { 0, 0, "Fardad" };
  struct PassingRate rate = { 0, 0, 0 };
  st.mark = 456;
  st.stNo = 2345678;
  st.name[0] = 'F';
  strcpy(st.name, "Fardad");
  scanf("%d", &st.mark);
  scanf("%s", st.name);
  printf("Student number: ", st.stNo);
  return 0;
}