#include "figures.h"
#include "chess.h"
#include <stdlib.h>

void display () {
  char** arregloF[]={rook, knight, bishop, queen, king, bishop, knight, rook};
  char** linea=superImpose(reverse(arregloF[0]),reverse(whiteSquare));
  for(int i=0;i<7;i++){
    linea = i%2==0 ? join(linea,superImpose(reverse(arregloF[i+1]),whiteSquare)) : join(linea,superImpose(reverse(arregloF[i+1]),reverse(whiteSquare)));
  }

  interpreter(linea);
  free(linea);
}  
