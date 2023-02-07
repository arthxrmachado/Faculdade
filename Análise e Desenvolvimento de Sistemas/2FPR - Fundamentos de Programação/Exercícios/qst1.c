/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 05/05/2021   -   AV1
	
	Questão 01:

	Desenvolver uma função recursiva que, dados uma matriz de inteiros 
	bidimensional M15x15, uma linha L e uma coluna C, determine se os 
	elementos da linha L e da coluna C possuem os mesmos elementos,
	porém na ordem inversa. Deve ser retornado o valor 1 se esta característica 
	for observada; caso contrário, a função retornará 0.	

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes

#define L 15
#define C 15

//protótipos das funções
int igualInverso (int matriz[ORDEM][ORDEM]);
int exibirMatriz(int matriz[ORDEM][ORDEM]);

//função main

void main(){
	
	//declaração de variáveis
	int m[ORDEM][ORDEM];
	
	//preenchendo a matriz e, em seguida, exibindo-a
	
}

//implementação das funções

//conferindo recursivamente se os elementos da linha L e coluna C possuem os mesmos elementos inversamente

int igualInverso (int matriz[ORDEM][ORDEM]){
	
	
}

//exibindo a matriz
int exibirMatriz(int matriz[ORDEM][ORDEM]){
	
	int i,j;
	
	for(i=0;i<ORDEM;i++){
		
		for(j=0;j<ORDEM;j++){
			
			printf("%4d ",matriz[i][j]);
			
		}
		
		printf("\n");
	}
}

//gerando a matriz

int gerarMatriz(int matriz[ORDEM][ORDEM]){
	
	int i, j;
	
		for(i=0;i<ORDEM;i++)
		{
			for(j=0;j<ORDEM;j++)
			{
				matriz[i][j]=i+j+1;
			}
		}	
}
