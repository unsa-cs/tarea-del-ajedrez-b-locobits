#include "chess.h"
#include "figures.h"

void display(){
  char** line;

  for(int i=0;i<4;i++){
    line=join(reverse(whiteSquare),whiteSquare);
  }
  interpreter(line);
}
	
