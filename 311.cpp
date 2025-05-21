#include <stdio.h>
#include<stdlib.h>
int main()
{
	char nomef[] = "z:\\notas.txt",
		nome[20];
	float nota1, nota2, nota3;
	FILE* ficheiro;

	ficheiro = fopen(nomef, "r");
	if (ficheiro == NULL)
	{
		printf("Erro, nao foi possivel abrir o ficheiro\n");
		system("pause");
		exit(1);
	}
	else
		while ((fscanf(ficheiro, "%s %f %f %f\n", nome, &nota1, &nota2, &nota3)) != EOF)
			printf("%s teve media %.2f\n", nome, (nota1 + nota2 + nota3) / 3);

	fclose(ficheiro);
	system("pause");
}