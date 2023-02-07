
#include<stdio.h>

void main (){
	
	//variaveis
	float custo_fab, custo_total, porc_dis, porc_imp;
	
	//corpo do programa
	printf("Digite o custo de fabrica: ");
	scanf("%f" , &custo_fab);
	
	printf("\nDigite a porcentagem do distribuidor: ");
	scanf("%f" , &porc_dis);
	
	printf("\nDigite a porcentagem dos impostos: ");
	scanf("%f" , &porc_imp);
	
	custo_total = custo_fab + ((porc_dis/100)*custo_fab) + ((porc_imp/100)*custo_fab);
	
	printf("\nO custo total ao consumidor do carro citado e: %0.2f" , custo_total);
	
}
