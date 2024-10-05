#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  char** blanco = whiteSquare;
  char** negro = reverse(blanco);
  char** pair = join(negro, blanco);
  interpreter(pair);
  free(pair);
  free(negro);
}
	
