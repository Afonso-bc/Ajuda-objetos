//Programa que calcula a ·rea de um tri‚ngulo
//variaveis globais e locais
#include<stdio.h>
#include<stdlib.h>
float bas, alt;

void ler_dados()
{
	
	printf("Digite a base: ");
	scanf("%f",&bas);
	printf("\nDigite a altura: ");
	scanf("%f",&alt);
	printf("\n");
}

float calc_area (float b, float a)
{
	float area;
	area = (b*a)/2;
	return(area);
}

main()
{
	ler_dados();
	printf("\n¡rea=%f\n",calc_area(bas, alt));
	//system("pause");
}

