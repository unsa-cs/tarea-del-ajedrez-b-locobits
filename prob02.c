#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  char** blanco = whiteSquare;
  char** negro = reverse(blanco);
  char** pair = join(negro, blanco);
  char** row = repeatH(pair, 4);
  interpreter(row);
  free(row);
  free(pair);
  free(negro);
}
	
