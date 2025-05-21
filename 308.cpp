#include <stdio.h>
#include<stdlib.h>

int main()
{
	char nomefc[]="z:\\notas.txt";
	float nota, media=0.0;
	FILE* ficheiro;

	ficheiro = fopen(nomefc, "w");
	if (ficheiro == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	{
		printf("Nota de Matematica: ");
		scanf("%f", &nota);
		fprintf(ficheiro, "Matematica: %.2f\n", nota);
		media += nota;

		printf("Nota de Fisica: ");
		scanf("%f", &nota);
		fprintf(ficheiro, "Fisica: %.2f\n", nota);
		media += nota;

		printf("Nota de Quimica: ");
		scanf("%f", &nota);
		fprintf(ficheiro, "Quimica: %.2f\n", nota);
		media+=nota;

		media /= 3;
		fprintf(ficheiro, "Media final: %.2f\n", media);
	}

	fclose(ficheiro);

	system("pause");
}