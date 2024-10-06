#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  /*char** figure = knight;
  char** square = whiteSquare;
  char** prob = superImpose(figure,square);*/
  char** linea=reverse(whiteSquare);
  for(int i=0;i<7;i++){
    linea = i%2==0 ? join(linea,whiteSquare) : join(linea,reverse(whiteSquare));
  }
  interpreter(linea);
  free(linea);
}
