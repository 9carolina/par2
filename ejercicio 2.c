//Ejercicio 2. Múltiplo de un numero en una serie//
#include<stdio.h>
int main(){
	int i=0, n=0;
	
	for(i=1;i<=100;i++){
		if(i%3==0){
		printf("%d ", i);
		printf("Es multiplo de 3\n");
		}
		else{
			printf("%d ", i);
			printf("No es multiplo de 3\n");
	}
	}
	return 0;
}
