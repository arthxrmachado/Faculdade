/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 20/04/2021   -   Matrizes
	
	Quest�o 01:

	Desenvolver uma fun��o recursiva que determine o n�mero de caracteres comuns 
	entre duas strings s1 e s2.		

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int caracteresComuns (char s1[] , char s2[]);
int excluirCaracteresIguais (char s[]);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	char s1[50];
	char s2[50];
	
	//leitura da string
	fflush (stdin);
	printf ("Entre com uma palavra: ");
	gets (s1);
	
	fflush (stdin);
	printf ("Entre com outra palavra: ");
	gets (s2);
	
	//chamando a fun��o e exibindo a quantidade de caracteres da string
	printf ("\nAs duas palavras digitadas possuem %d caracteres em comum.", caracteresComuns (s1, s2));
}

//implementa��o das fun��es

int excluirCaracteresIguais (char s[]){
	
	//declara��o de vari�veis
	
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
	
	//declara��o de vari�veis
	
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
