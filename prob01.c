#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
	char** cuadrado=whiteSquare;
	char** cuadradoNegro=reverse(cuadrado);
	char** row=repeatH(join(cuadrado,cuadradoNegro),4);
	interpreter(row);
	free (row);
	free (cuadradoNegro);
}
