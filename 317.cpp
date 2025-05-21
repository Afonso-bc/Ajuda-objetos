#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
typedef struct
{
	char titulo[30];
	int codlivro;
	float preço;
} reglivro;

int main ( )
{
	FILE* fich;
	reglivro livro;
	char opcao;
	if ((fich = fopen("z:\\livros.bin", "wb")) == NULL)
	{
		printf("Erro ao criar o ficheiro\n");
		system("pause");
	}
	do
	{
		
		printf("\n\nTitulo: ");
		scanf("%s", &livro.titulo);
		printf("Codigo: ");
		scanf("%d", &livro.codlivro);
		printf("Preco: ");
		scanf("%f", &livro.preço);
		fwrite (&livro, sizeof(livro), 1, fich);
		printf("\nAdiciona outro livro (S/N)? ");
		opcao = _getche();
	} while (toupper(opcao) == 'S');
	fclose (fich);
	system("pause");
}