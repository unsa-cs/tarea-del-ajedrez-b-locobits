#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
	char** figure = knight;
	char** square = whiteSquare;
	char** prob = superImpose(figure,square);
	interpreter(prob);
	free(prob);
}
