#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c -lm
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilities.h"

/*

******* ********
* @   * * @    *
*     * *  @   *
*   @ * *   @  *
******* ********

*/

int main(void)
{
  int i;
  srand(time(NULL));
  for (i = 0; i < 10; i++)
    fprintf(stdout,"Random number %d is %d\n", i + 1, 1+ rand()%6);
  return 0;
}