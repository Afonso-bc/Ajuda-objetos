#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char titulo[30];
	int codlivro;
	float preco;
} reglivro;

int main()
{
	FILE* fich;
	reglivro livro;
	if ((fich = fopen("z:\\livros.bin", "rb")) == NULL)
	{
		printf("Erro na abertura do ficheiro\n");
		system("pause");
	}
	while (!feof(fich))
	{
		fread(&livro, sizeof(livro), 1, fich);
		printf("\nTitulo: %s", livro.titulo);
		printf("\nCodigo: %d", livro.codlivro);
		printf("\nPreco: %.2f\n", livro.preco);
	}
	fclose(fich);
	system("pause");
}