#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
typedef struct
{
	char nome[30];
	int idade;
	float salario;
	char sexo;
} regfuncionario;
void menu()
{
	printf("\n\t\tMENU");
	printf("\n\t1-Inserir");
	printf("\n\t2-Listar");
	printf("\n\t3-Sair");
}
int main()
{
	int opc = 0;


	do {
		system("cls");
		menu();
		printf("\n\nOpcao: ");
		scanf("%d", &opc);
		switch (opc)
		{
			case 1:
				break;

			case 2:
				break;

			case 3:
				printf("\nO programa vai encerrar");
				system("pause");
				exit(0);
			default:
				printf("\nEssa opção não existe  \nEscolha1-2-3");
				system("pause");

		}
	} while (opc != 3);

}