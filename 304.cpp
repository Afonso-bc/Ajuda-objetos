/* Verificar se um ficheiro existe */
#include <stdio.h>
#define buffer 20

int main() {
	/* Declaração de variaveis */
	FILE* fp;
	char s[buffer];

	/* Ler o nome do ficheiro de texto */
	printf("Introduza o Nome do Ficheiro [Máximo %d caracteres]:", buffer-1);
	scanf("%s", s);

	/* Abrir o Ficheiro */
	fp = fopen(s, "r");

	/* Verificar se a abertura foi feita com sucesso */
	if (fp == NULL)
		printf("Impossivel abrir o ficheiro %s\n", s);
	else {
		printf("Ficheiro %s aberto com sucesso!!!\n", s);
		fclose(fp);
	}
	system("pause");
}