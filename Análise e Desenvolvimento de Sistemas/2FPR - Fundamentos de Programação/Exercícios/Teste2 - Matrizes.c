/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 20/04/2021   -   Matrizes
	
	Quest�es Avulsas:
	
	Crie um programa que solicita que o usu�rio digite 4 notas de 
	0 a 10 (tipo float) de 4 alunos. Os valores dever�o ser armazenados
	em uma matriz bidimensional. Fa�a tamb�m as m�dias das notas de cada aluno
	e armazene as 4 m�dias em um vetor. Por �ltimo, coloque na tela do usu�rio
	uma mensagem informando as m�dias de cada aluno.

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define L 2
#define C 2

//prot�tipos das fun��es
void preencherMatriz(float matriz[L][C]);
void exibirMatriz(float matriz[L][C]);

//main
void main(){
	
	float matriz[L][C];
	
	//preenchendo a matriz e, em seguida, exibindo-a
	
	preencherMatriz(matriz);
	
	exibirMatriz(matriz);
	
}

//preenchendo a matriz
void preencherMatriz(float matriz[L][C]){
	
	int i,j,k, nota=1, aluno=1;
	float media = 0, vetor[C];
	
	for(i=0;i<L;i++){
	
		for(j=0;j<C;j++){
			
			printf("Digite a %do. nota do %do. aluno: " , nota, aluno);
			scanf("%f" , &matriz[i][j]);
			
			media += matriz[i][j];
			
			nota++;
			
		}
		
		media = media/L;
		
		vetor [i] = media;
		
		media=0;
		
		nota=1;
		aluno++;
	}
	
	for(k=0; k<C; k++){
			
	printf("\nAluno %d || %.2f ", k+1, vetor[k]);
		
	}
	
	printf("\n\n");
	
}

//exibindo a matriz
void exibirMatriz(float matriz[L][C]){
	int i,j;
	
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			
			printf("%.1f ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
}
