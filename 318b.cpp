#define _CRT_SECURE_NO_WARNINGS
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
	while (fread(&livro, sizeof(livro), 1, fich) == 1)
	{
		printf("\nTitulo: %s", livro.titulo);
		printf("\nCodigo: %d", livro.codlivro);
		printf("\nPreco: %.2f\n", livro.preco);
	}
	fclose(fich);
	system("pause");
}