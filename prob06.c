#include "figures.h"
#include "chess.h"
#include <stdlib.h>
void display () {
  char** arregloF[]={rook, knight, bishop, queen, king, bishop, knight, rook};
  char** linea=superImpose(reverse(arregloF[0]),reverse(whiteSquare));
	char** lineap= superImpose(reverse(pawn), whiteSquare);  
	for(int i=0;i<7;i++){
  	if(i%2==0){
			linea=join(linea, superImpose(reverse(arregloF[i+1]), whiteSquare));
			lineap=join(lineap, superImpose(reverse(pawn), reverse(whiteSquare)));
		}
		else{
			linea= join(linea, superImpose(reverse(arregloF[i+1]), reverse(whiteSquare)));
			lineap= join(lineap, superImpose(reverse(pawn), whiteSquare));
		}
	}
	char** linean=up(linea, lineap);
	interpreter(linean);
	free(linea);
	free(lineap);
	free(linean);
} 

