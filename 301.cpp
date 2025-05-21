#include <stdio.h>
int main() {
	FILE* fp, /* apontador para o ficheiro */
		int contador = 0; /* para contar os caracteres */
	int caracter; /* inteiro para armazenar cada caracter lido */

	/* Abrir o ficheiro */
	fp = fopen("z:\\texto.txt", "r");

	/* Contar os caracteres do ficheiro */
	while ((caracter = fgetc(fp)) != EOF) {
		putchar(caracter);
		contador++;
	}
	printf("\nNúmero total de caracteres = %d\n", contador);

	/* Fechar o ficheiro */
	fclose(fp);

	/* Terminar o programa */
	system("pause");
}