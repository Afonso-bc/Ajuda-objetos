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
	long desloc;
	if ((fich = fopen("z:\\livros.bin","rb")) == NULL)
	{
		printf("Erro na abertura do ficheiro\n");
		system("pause");
	}

	desloc = sizeof(livro) * 1;

	if (fseek(fich, desloc, 0) != 0)
	{
		printf("Movimentação não realizada");
		system("pause");
		exit(1);
	}
	else
	{
		fread(&livro, sizeof(livro), 1, fich);
		printf("\nTitulo: %s", livro.titulo);
		printf("\nCodigo: %d", livro.codlivro);
		printf("\nPreco: %.2f\n", livro.preco);
	}
	fclose(fich);
	system("pause");
}