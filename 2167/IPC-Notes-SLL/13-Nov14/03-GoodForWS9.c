#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
struct Box {
   int id;			// the box ID
   double size[3];	// dimensions of the box (Length, Width, Height)
   double weight;	// weight of the box
};

int readBox(FILE* ftpr, struct Box* bp) {
   return fscanf(fptr, "%d%lf....", &bp->id, &bp->size[0], ....) == 5;
}

void writeBox(FILE* ftpr,const struct Box* bp) {
   fprintf(fptr, "%d%lf....\n", bp->id, bp->size[0], ....);
}