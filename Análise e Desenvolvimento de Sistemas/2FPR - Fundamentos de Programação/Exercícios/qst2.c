/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 05/05/2021   -   AV1
	
	Quest�o 02:	

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipo das fun��es

int testarSenha (char s[]);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	char s[30];
	
	//leitura da string
	fflush (stdin);
	printf ("Entre com uma senha: ");
	gets (s);
	
	printf ("%d ", testarSenha(s));
	
}

int testarSenha (char s[]){
	
	//declara��o de vari�veis
	
	int i, cont=0, contMaiusculo=0, contMinusculo=0;
	
	if (strlen(s) < 6 || strlen(s) > 10){
		
		return 0;
	}
	
	else {
		
		for (i=strlen(s); s[i] >= 0; i++){
			
			if((s[i] != s[i-1]) && (s[i] != s[i-2])){
			
		
				if ((s[i] > 0) && (s[i] < 9)){
					
				
					if (((s[i] > 0) && (s[i] < 9)) != ((s[i-1] > 0) && (s[i-1] < 9))){
				
						++cont;
				
					}
					
				}
				
				else if ((s[i] >= 'A') && (s[i] <= 'Z')){
					
					++contMaiusculo;
					
				}
				
				else if ((s[i] >= 'a') && (s[i] <= 'z')){
					
					++contMinusculo;
					
				}
				
			}
			
		if (cont < 0){
			
			return 0;
		}
		
		if (cont > 3){
			
			return 0;
		}
		
		if (contMaiusculo <= 0){
			
			return 0;
		}
		
		if (contMinusculo <= 0){
			
			return 0;
		}
		
	}
	
}
	
	return 1;
	
}
