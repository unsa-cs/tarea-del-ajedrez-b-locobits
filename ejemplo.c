#include "chess.h"
#include "figures.h"

void display(){
  char** cuadrado= repeatH(whiteSquare,8);
  interpreter(cuadrado);
}
