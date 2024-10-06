#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  /*char** figure = knight;
  char** square = whiteSquare;
  char** prob = superImpose(figure,square);*/
  char** arregloF[]={rook, knight, bishop, queen, king, bishop, knight, rook};
  char** linea=superImpose(arregloF[0],reverse(whiteSquare));
  for(int i=0;i<7;i++){
    linea = i%2==0 ? join(linea,superImpose(arregloF[i+1],whiteSquare)) : join(linea,superImpose(arregloF[i+1],reverse(whiteSquare)));
  }

  interpreter(linea);
  free(linea);
}
