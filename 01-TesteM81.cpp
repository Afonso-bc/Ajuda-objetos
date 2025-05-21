#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{

	FILE* fp; /* apontador para o ficheiro */
	int contador = 0;  /* variavel para contar os caracteres */

	/* Abrir o ficheiro */
	if ((fp = fopen("z:\\teste.txt", "r")) == NULL)
	{
		printf("Erro ao abrir ficheiro!!!\n");
		exit(1);
	}
	/* Contar os caracteres do ficheiro */
	while (fgetc(fp) != EOF)
		contador++;
	printf("Numero total de caracteres = %d\n", contador);
	
	/* Contar as linhas do ficheiro */
	while (fgetc(fp) != EOF)
	contador++;
	printf("Numero total de palavras = %d\n", contador);

	/* Contar as palavras do ficheiro */
	while (fgetc(fp) != EOF)
	contador++;
	printf("Numero total de linhas = %d\n", contador);

	/*Contar as vogais do ficheiro*/
	while (fgetc(fp) != EOF)
	contador++;
	printf("Numero total de vogais= %d\n", contador);

	/* Fechar o ficheiro */
	fclose(fp);

	/*Terminar o programa */
	system("pause");
	}
