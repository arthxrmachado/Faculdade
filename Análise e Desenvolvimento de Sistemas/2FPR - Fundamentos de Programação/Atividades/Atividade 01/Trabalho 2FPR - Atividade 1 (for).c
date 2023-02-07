/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 20/04/2021   -   Matrizes
	
	Questão 01:

	Desenvolver uma função recursiva que determine o número de caracteres comuns 
	entre duas strings s1 e s2.		

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int caracteresComuns (char s1[] , char s2[]);
int excluirCaracteresIguais (char s[]);

//função main
void main ()
{
	//declaração de variáveis
	char s1[50];
	char s2[50];
	
	//leitura da string
	fflush (stdin);
	printf ("Entre com uma palavra: ");
	gets (s1);
	
	fflush (stdin);
	printf ("Entre com outra palavra: ");
	gets (s2);
	
	//chamando a função e exibindo a quantidade de caracteres da string
	printf ("\nAs duas palavras digitadas possuem %d caracteres em comum.", caracteresComuns (s1, s2));
}

//implementação das funções

int excluirCaracteresIguais (char s[]){
	
	//declaração de variáveis
	
	int i, j, k;

	//varrendo a string
	
	for (i=0; s[i]!='\0'; i++){
		
		for (j=i+1; s[j]!='\0'; j++){
			
			if (s[i] == s[j]){
				
				for (k=i; k<strlen(s); k++){
					
					s[k] = s[k+1];
					
				}
				
				i--;
			}
		}
	}
}

int caracteresComuns (char s1[] , char s2[]){
	
	//declaração de variáveis
	
	int i, j, cont;
	
	excluirCaracteresIguais (s1);
	excluirCaracteresIguais (s2);
	
	//percorrendo os caracteres da string 1
	
	for (i=0; i<s1[i]!='\0'; i++){
		
		//percorrendo os caracteres da string 2
		
		for (j=0; i<s2[j]!='\0'; j++){
		
			if (s1[i] == s2[j]){
				
				cont++;
			}
			
		}
			
	}
	
	//retornando o resultado
	return cont;
}
