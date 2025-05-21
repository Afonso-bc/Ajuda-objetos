#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j, ve[6];
	for (i = 1; i <= 5; i++)
	{
		ve[i] = rand() % 50 + 1;
		for (j = 1; j < i; j++)
		{
			if( ve[i] == ve[j])
			{
				ve[i] = rand() % 50 + 1;
				j = 0;
			}
			
		}
	}
	
	for (i = 1; i <= 5; i++)
		printf("%d\t", ve[i]);
	
	system("pause");
}