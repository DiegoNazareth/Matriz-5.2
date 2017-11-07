//Se requiere determinar cuántos ceros se encuentran en un arreglo de cuatro
//renglones y cuatro columnas, las cuales almacenan valores comprendidos
//entre 0 y 9.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int matriz[4][4], i, j, contador=0;
	srand(time(NULL));
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	matriz[i][j]=0+rand()%((9+1)-1);
}
}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if (matriz[i][j]==0){
				contador=contador+1;
			}
		}
	}
	printf("Matriz\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
	}
	printf(" Ceros en la matriz : %d", contador);
	return(0);
}
