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

  char** columS=up(reverse(whiteSquare),whiteSquare);
  char** rowS = repeatH(join(columS,reverse(columS)),4);
  char** midBoard = repeatV(rowS,2);

	char** lineaTop=up(linea, lineap);
  char** lineaBot=reverse(up(lineap, linea));
	char** tablero=up(lineaTop,(up(midBoard,lineaBot)));
	interpreter(tablero);
	free(linea);
	free(lineap);
	free(lineaTop);
	free(lineaBot);
  free(columS);
	free(tablero);
  free(rowS);
  free(midBoard);
} 

