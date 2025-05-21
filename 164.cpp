#include<stdio.h>
#include<stdlib.h>
void escr_strl (char s [])
{
	printf("\n\nO teu nome: %s\n",s);
}

main()
{
	char nome[50];
	printf("Escreve um nome: ");
	gets(nome);
	escr_strl (nome);
	printf("\n\n");
	//system("pause");
}
