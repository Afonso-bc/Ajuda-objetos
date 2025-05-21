#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
typedef struct
{
	char nome[30];
	int idade;
	float salario;
} regfuncionario;

int main()
{
	FILE* fich;
	regfuncionario perfil;
	char opcao;
	if ((fich = fopen("z:\\perfil.bin", "w+")) == NULL)
	{
		printf("Erro ao criar o ficheiro\n");
		system("pause");
	}
	do
	{

		printf("\n\nNome: ");
		scanf("%s", &perfil.nome);
		printf("\nIdade: ");
		scanf("%d", &perfil.idade);
		printf("\nSalario: ");
		scanf("%f", &perfil.salario);
		fwrite(&perfil, sizeof(perfil), 1, fich);
		printf("\nAdiciona outro perfil (S/N)? ");
		opcao = _getche();
	} while (toupper(opcao) == 'S');
	rewind(fich);
while (fread(&perfil, sizeof(perfil), 1, fich) == 1)
{
	printf("\nTitulo: %s", perfil.nome);
	printf("\nCodigo: %d", perfil.idade);
	printf("\nPreco: %.2f\n", perfil.salario);
}
fclose(fich);
system("pause");
}