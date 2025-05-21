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
	char sexo;
} regfuncionario;

int main()
{
	FILE* fich;
	regfuncionario funcionarios;
	char opcao;
	if ((fich = fopen("z:\\funcionarios.bin", "a+")) == NULL)
	{
		printf("Erro ao criar o ficheiro\n");
		system("pause");
	}
	do
	{

		printf("\nNome: ");
		scanf("%s", &funcionarios.nome);
		printf("Idade: ");
		scanf("%d", &funcionarios.idade);
		printf("Salario: ");
		scanf("%f", &funcionarios.salario);
		printf("Sexo: ");
		fflush(stdin);
		scanf("%c", &funcionarios.sexo);
		fwrite(&funcionarios, sizeof(funcionarios), 1, fich);
		printf("\nAdicionar outro funcionario/a (S/N)? ");
		opcao = _getche();
	} while (toupper(opcao) == 'S');
	rewind(fich);
	printf("\nNOME\tSEXO\tIDADE\tSALARIO");
	while (fread(&funcionarios, sizeof(funcionarios), 1, fich) == 1)
	{

		printf("\n%s", funcionarios.nome);
		printf("\t%c", funcionarios.sexo);
		printf("\t%d", funcionarios.idade);
		printf("\t%.2f", funcionarios.salario);
		
	}
	system("pause");
}