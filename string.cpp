#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL"portuguese");
	char frase1[100], frase2[100];
	int nca;

	printf("\nManipulação de strings\n\n");

	printf("\nIntroduza uma frase1: ");
	gets_s(frase1, 99);
	//strlen
	nca = strlen(frase1);
	printf("\nNu de cara = %d", strlen(frase1));

	//o meu codigo
	printf("\nIntroduza uma frase1: ");
	gets_s(frase1, 99);

	printf("\nIntroduza uma frase2: ");
	gets_s(frase2, 99);

	strcat(frase1, frase2);
	printf("\nNova frase 1: %s", frase1);
	printf("\nNova frase 2: %s", frase2);

	nca = strlen(frase1);
	printf("\nNu de cara da nova frase = %d\n\n", nca);

	nca = strlen(frase2);
	printf("\nNu de cara da nova frase = %d\n\n", nca);

	int result;

	printf("\nIntroduza uma frase1: ");
	gets_s(frase1, 99);

	result = strcmp(frase1, frase2);
	if (result < 0) {
		printf("frase1 e menor frase2");
	}
	else if (result > 0) {
		printf("frase2 e menor que frase1");
	}
	else {
		printf("frase1 e iguar frase2");
	}

	strcpy(frase1, frase2);
	printf("\nNova frase 1: %s", frase1);

	printf("\n");
	system("pause");
}