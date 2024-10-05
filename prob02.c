#include "chess.h"
#include "figures.h"

void display(){
  char** whiteLine=repeatH(whiteSquare, 8);
  for(int i=0;i<8;i+=2){
    whiteLine[i]=reverse(whiteLine[i]);
  }
  interpreter(whiteLine);
}
	
