#include <string.h>
#include "analyser.h"


int main(void) {
  struct StdMark st;
  st.mark = 456;
  st.stNo = 2345678;
  st.name[0] = 'F';
  strcpy(st.name, "Fardad");
  scanf("%d", &st.mark);
  scanf("%s", st.name);
  printf("Student number: ", st.stNo);
  return 0;
}