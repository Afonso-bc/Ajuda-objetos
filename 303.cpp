#include <stdio.h>
int main() {
	/* Declaração de variáveis */
	FILE* fp;

	/* Abrir o Ficheiro */
	fp = fopen("texto.txt", "r");

	/* Verificar se a abertura foi feita com sucesso */
	if (fp == NULL)
		printf("Impossivel abrir o ficheiro \"texto.txt\"\n");
	else {
		printf("Ficheiro \"texto.txt\" aberto com sucesso!!!\n");
		fclose(fp);
	}
	system("pause");
}