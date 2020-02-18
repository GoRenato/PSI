#include <stdio.h>
int verificacao(int numero)
{
	if(numero%2==0) return 1; //par
	else return 0;
	
}
void main()
{
	int numero;
	printf("Introduza um numero inteiro: ");
	scanf("%d", &numero);
	if(verificacao(numero)) printf("O seu numero é Par.\n\n");
	else printf("O seu numero é Impar.\n\n");	
}
