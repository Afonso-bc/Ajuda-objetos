//Programa que calcula a �rea de um tri�ngulo
//vari�veis globais e locais
#include<stdio.h>
#include<stdlib.h>
float bas, alt;
void ler_dados(); //prot�tipo ou cabe�alho
float calc_area(float b,float a); //prot�tipo
main()
{
	
	ler_dados();
	printf("\nArea = %.2f\n",calc_area(bas, alt));
	//system("pause");
}

void ler_dados()
{
	printf("Digite a base: ");
	scanf("%f",&bas);
	printf("\nDigite a altura: ");
	scanf("%f",&alt);
	printf("\n");
}

float calc_area(float b,float a)
{
	float area;
	area = (b*a)/2;
	return(area);
}

