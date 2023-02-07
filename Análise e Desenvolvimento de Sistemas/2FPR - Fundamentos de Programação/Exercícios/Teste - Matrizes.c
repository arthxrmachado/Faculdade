#include <stdio.h>

#define L 3
#define C 3

void main (){
	
	//variáveis
	
	int i, j;
	
	int matriz [L][C];
						 
	//recolhendo números de uma matriz
	
	for (i=0; i<L; i++){
		
		for (j=0; j<C; j++){
			
			printf("Digite qualquer numero: ");
			scanf("%d" , &matriz[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
	for (i=0; i<L; i++){
		
		for (j=0; j<C; j++){
			
			printf("%d" , matriz[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
}
