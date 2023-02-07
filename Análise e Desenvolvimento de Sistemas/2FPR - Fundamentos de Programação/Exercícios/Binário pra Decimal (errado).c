#include <stdio.h>

//prototipo das funções
int BinarioDecimal (int binario, int decimal, int base);

//main
void main ()
{
	//declaração de variaveis
	int binario, decimal = 0, base = 1;
	
	printf("Informe o valor de N: ");
	scanf("%d", &binario);
	
	decimal = BinarioDecimal(binario, decimal, base);
	
	printf("%d dec \n", decimal);	

}

//implementação da função
int BinarioDecimal (int binario, int decimal, int base)
{
	int ultimodigito;
	
	if (binario > 0)
	{
		ultimodigito = binario%10;
		decimal += ultimodigito*base;
		base = base*2;
		
		decimal = BinarioDecimal(binario/10, decimal, base);

	}
			
	return decimal;
	
}
