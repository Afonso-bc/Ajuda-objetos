#include <stdio.h>
#include<stdlib.h>
int main()
{
	char nomef[] = "z:\\novo.txt",
		ch;
	int num = 0;
	FILE* ficheiro;
	ficheiro = fopen(nomef, "r");
	if (ficheiro == NULL)
	{
		printf("Erro, nao foi possivel abrir o ficheiro\n");
		system("pause");
		exit(1);
	}
	else
		while ((ch = fgetc(ficheiro)) != EOF)
			if (ch == '\n')
				num++;
	printf("Existem %d linhas no ficheiro\n", num);
	fclose(ficheiro);
	system("pause");
}