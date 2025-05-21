#include <stdio.h>
#include<stdlib.h>

int main()
{
	char nomef[] ="z:\\teste.txt",
	ch1, ch2, ch3;
	FILE *ficheiro;
	ficheiro = fopen(nomef, "r");
	if (ficheiro == NULL)
	{
		printf("Erro, nao foi possivel abrir o ficheiro\n");
		system("pause");
		exit(1);
	}
	else
		while( (fscanf(ficheiro,"%c %c %c\n", &ch1, &ch2, &ch3)) != EOF )
			printf("%c %c %c\n", ch1, ch2, ch3);

	fclose(ficheiro);
	system("pause");
}