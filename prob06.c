#include "figures.h"
#include "chess.h"
#include <stdlib.h>
void display () {
  char** arregloF[]={rook, knight, bishop, queen, king, bishop, knight, rook};
  char** linea=superImpose(arregloF[0],reverse(whiteSquare));
	char** lineap= superImpose(pawn, whiteSquare);  
	for(int i=0;i<7;i++){
  	if(i%2==0){
			linea=join(linea, superImpose(arregloF[i+1], whiteSquare));
			lineap=join(lineap, superImpose(pawn, reverse(whiteSquare)));
		}
		else{
			linea= join(linea, superImpose(arregloF[i+1], reverse(whiteSquare)));
			lineap= join(lineap, superImpose(pawn, whiteSquare));
		}
	}
	char** linean=up(linea, lineap);
	char** lineaflip=reverse(linean);
	char** tablero=up(linean,rook);
	char** flip=flipV(linean);
	interpreter(tablero);
	interpreter(flip);
	free(linea);
	free(lineap);
	free(linean);
	free(lineaflip);
	free(tablero);
	free(flip);
} 

