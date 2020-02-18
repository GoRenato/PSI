#include <stdio.h>
int celsius1(float temperatura)
{
	temperatura=((temperatura*9)/5)+32;
	printf("Temperatura do Fahrenheit: %.1f\n", temperatura);
}
void main()
{
	int graus_celsius;	
	printf("Introduza em graus_celsius:");
	scanf("%d", &graus_celsius);
	celsius1(graus_celsius);
	
}
