#include <stdio.h>
#include <stdlib.h>
struct dadosaluno
{
	int num;
	char nome[20];
	float idade;
};

int main()
{
	char ficheiro[20] = "z:\\alunos.txt";
	FILE* fp;
	long pos = 0;
	struct dadosaluno alunos;

	if ((fp = fopen(ficheiro, "r")) == NULL)
	{
		printf("\n\nO ficheiro nao pode ser aberto.\n");
		system("pause");
		exit(1);
	}
	else
	{
		while (!feof(fp))
		{
			fread(&alunos, sizeof(alunos), 1, fp);
			printf("%d\t", alunos.num);
			printf("%s\t", alunos.nome);
			printf("%2.1f\n", alunos.idade);

		}

	}
	printf("Carrega uma tecla para terminar!");
	system("pause");
	fclose(fp);
}