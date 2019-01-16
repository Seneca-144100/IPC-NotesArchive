#ifndef  SICT_BAR_H__
#define  SICT_BAR_H__


struct Bar {
  char filling;
  int length;
};
void drawBar(struct Bar theBar);
struct Bar getBar(void);




#endif