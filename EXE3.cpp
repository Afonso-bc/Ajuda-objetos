#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, j, ve[6];

	srand(time(NULL));

	//cria��o dos n�meros aleat�rios

	for (i = 1; i <= 5; i++)
	{
		ve[i] = rand() % 50 + 1;

		for (j = 1; j < i; j++)
		{
			if (ve[i] == ve[j])
			{
				ve[i] = rand() % 50 + 1;
				j = 0;
			}

		}
	}

	//visualiza��o dos n�meros do totoloto

	printf("\nVisualizacao dos numeros do totoloto\n");

	for (i = 1; i <= 5; i++)
		printf("%d\t", ve[i]);

	printf("\n\n\n");
	system("pause");
}

