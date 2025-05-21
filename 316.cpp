/* Usando fread para ler dados de um ficheiro */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fich;
	char nome[15];
	int idade;
	float altura;

	if ((fich = fopen("z:\\aluno.dat", "rb")) == NULL)
	{
		printf("Erro ao abrir ficheiro!!!\n\n");
		exit(1);
	}

	fread(&nome, sizeof(nome), 1, fich);
	fread(&idade, sizeof(idade), 1, fich);
	fread(&altura, sizeof(altura), 1, fich);

	printf("nome : %s\n", nome);
	printf("idade : %d\n", idade);
	printf("altura: %.2f\n", altura);
	fclose(fich);
	system("pause");
}