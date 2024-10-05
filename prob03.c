#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
	char** white = whiteSquare;
	char** black = reverse(white);
	char** pair = join(black, white);
	char** line = repeatH(pair, 4);
	char** square = repeatV(line, 4);
	interpreter(square);
	free(square);
	free(line);
	free(pair);
	free(black); 
}
