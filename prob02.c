#include "chess.h"
#include "figures.h"

int  main(){
	char* whiteSquare[]={
		" ",
		0
	};
	char* graySquare[]={
		"##",
		0
	};
	char** repeatSquares=repeatH(whiteSquare, 8);
	interpreter(repeatSquares);
	return 0;
}
	
