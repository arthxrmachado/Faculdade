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
void mediaMatriz(float matriz[L][C]);

//main
void main(){
	
	float matriz[L][C];
	
	//preenchendo a matriz e, em seguida, exibindo-a
	
	preencherMatriz(matriz);
	
	exibirMatriz(matriz);
	
	mediaMatriz(matriz);
	
}

//preenchendo a matriz
void preencherMatriz(float matriz[L][C]){
	
	int i,j, nota=1, aluno=1;
	
	for(i=0;i<L;i++){
	
		for(j=0;j<C;j++){
			
			printf("Digite a %do. nota do %do. aluno: " , nota, aluno);
			scanf("%f" , &matriz[i][j]);
			
			nota++;
			
		}
		
		nota=1;
		aluno++;
	}
	
	printf("\n");
	
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
void mediaMatriz(float matriz[L][C])
{
	//Declaração de Variaveis
	int i, j, k, l;
	float mediaAluno=0, media=0, vetor[C];

	for(i=0; i<L; i++)
	{
		for(j=0; j<C; j++)
		{
			mediaAluno += matriz[i][j];
		}
		
		media = mediaAluno/C;
		
		vetor[i] = media;
		
		media=0;
		mediaAluno=0;
	}
	
	for(k=0; k<C; k++)
	{
		printf("\nAluno %d || %.2f ", k+1, vetor[k]);
	}
}
