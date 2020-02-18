#include <stdio.h>
int calculadora (int num1, int num2)
{
	int soma, divisao, multiplicacao, subtracao;
	soma=num1+num2;
	divisao=num1/num2;
	multiplicacao=num1*num2;
	subtracao=num1-num2;
	printf("%d\n%d\n%d\n%d\n", soma,divisao,multiplicacao,subtracao);
}
void main()
{
	int n1,n2;
	printf("Introduza um numero:");
	scanf("%d", &n1);
	printf("Introduza outro numero:");
	scanf("%d", &n2);
	calculadora(n1,n2);
}
