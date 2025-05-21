#include <stdio.h>
#include<stdlib.h>

int main()
{
	char nomef[] = "z:\\novo.txt";
	char ch;
	FILE* fch;

	fch = fopen(nomef, "a");
	if (fch == NULL)
		printf("Erro, nao foi possivel abrir o ficheiro \n");
	else
		do {
			printf{ "Caractere: " };
			ch = getchar{};
			fflush{ stdin };
			fputc{ ch, fch };
		} while (ch != '\n');

		fclose(fch);

		system("pause");
}