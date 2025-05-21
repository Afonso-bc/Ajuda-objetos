/* Usando fwrite para escrever dados num ficheiro */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fich;
	char nome[15] = "Carlos";
	int idade = 34;
	float altura = 1.82;

	if ((fich = fopen("z:\\aluno.dat", "wb")) == NULL)
	{
		printf("Erro ao abrir ficheiro!!!\n\n");
		exit(1);
	}

	fwrite(&nome, sizeof(nome), 1, fich);
	fwrite(&idade, sizeof(idade), 1, fich);
	fwrite(&altura, sizeof(altura), 1, fich);

	fclose(fich);
	system("pause");
}