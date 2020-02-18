#include <stdio.h>
int horas_minutos(int minutos, int horas)
{	
	minutos=(horas*60)+minutos;
	printf("%d\n",minutos);
}
void main()
{
	int horas,minutos;
	printf("Introduza as horas:");
	scanf("%d", &horas);
	printf("Introduza os minutos:");
	scanf("%d", &minutos); 
	horas_minutos(minutos,horas);
}

