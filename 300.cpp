#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp; /* apontador para o ficheiro */
	int contador = 0; /* variavel para contar os caracteres */

	/* Abrir o ficheiro */
	if ((fp = fopen("z:\\texto.txt", "r")) == NULL)
	{
		printf("Erro ao abrir ficheiro!!!\n");
		exit(1);
	}
	/* Contar os caracteres do ficheiro */
	while (fgetc(fp) != EOF)
		contador++;
	printf("Número total de caracteres = %d\n", contador);

	/* Fechar o ficheiro */
	fclose(fp);

	/* Terminar o programa */
	system("pause");
}