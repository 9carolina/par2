//Ejercicio 1. Operaciones Aleatorias//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i=0, numAl, Al1, Al2, suma=0, resta=0, mult=1, div=0;
	srand(time(NULL));
	
	Al1=rand();
	Al2=rand();
	numAl=rand()%5+1;
	printf("%d\n", numAl);
	
	while(numAl!=5){
	numAl=rand()%5+1;
	switch(numAl=1){
		case 1:
			printf("%d+%d", Al1, Al2);
			suma=Al1+Al2;
			printf("=%d", suma);
			break;
		case 2:
			printf("%d-%d", Al1, Al2);
			resta=Al1-Al2;
			printf("=%d", resta);
			break;
		case 3:
			mult=Al1*Al2;
			printf("%d", mult);
			break;
		case 4:
			div=Al1/Al2;
			printf("%d", div);
			break;
	}
	}
	return 0;
}
