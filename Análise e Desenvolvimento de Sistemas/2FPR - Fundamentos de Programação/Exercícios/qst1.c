/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 05/05/2021   -   AV1
	
	Quest�o 01:

	Desenvolver uma fun��o recursiva que, dados uma matriz de inteiros 
	bidimensional M15x15, uma linha L e uma coluna C, determine se os 
	elementos da linha L e da coluna C possuem os mesmos elementos,
	por�m na ordem inversa. Deve ser retornado o valor 1 se esta caracter�stica 
	for observada; caso contr�rio, a fun��o retornar� 0.	

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes

#define L 15
#define C 15

//prot�tipos das fun��es
int igualInverso (int matriz[ORDEM][ORDEM]);
int exibirMatriz(int matriz[ORDEM][ORDEM]);

//fun��o main

void main(){
	
	//declara��o de vari�veis
	int m[ORDEM][ORDEM];
	
	//preenchendo a matriz e, em seguida, exibindo-a
	
}

//implementa��o das fun��es

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
