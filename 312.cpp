#include <stdio.h>
#include<stdlib.h>

int main()
{
	char nomef[] = "z:\\dados.txt",
		info[50];
	FILE* ficheiro;

	ficheiro = fopen(nomef, "r");
	if (ficheiro == NULL)
	{
		printf("Erro , nao foi possivel abrir o ficheiro\n");
		system("pause");
		exit(1);
	}
	else while ((fgets(info, sizeof(info), ficheiro)) != NULL)
		printf("%s", info);

	fclose(ficheiro);
	system("pause");
}