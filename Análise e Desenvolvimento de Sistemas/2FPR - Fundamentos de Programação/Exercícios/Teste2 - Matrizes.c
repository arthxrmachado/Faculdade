/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 20/04/2021   -   Matrizes
	
	Questões Avulsas:
	
	Crie um programa que solicita que o usuário digite 4 notas de 
	0 a 10 (tipo float) de 4 alunos. Os valores deverão ser armazenados
	em uma matriz bidimensional. Faça também as médias das notas de cada aluno
	e armazene as 4 médias em um vetor. Por último, coloque na tela do usuário
	uma mensagem informando as médias de cada aluno.

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define L 2
#define C 2

//protótipos das funções
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
