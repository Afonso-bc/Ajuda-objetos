#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int num, i;
		
		
	printf("Escreve um numero:");
	scanf("%i", &num);
	/*for (i = 1; i <= 10; i++)
	{
		printf("%d\t", num );
		num = num * 3;
		if (num >= 100)
			exit(1);
	}*/
	while (num <= 100)
	{
		printf("%d\t", num);
		num = num * 3;
	}
	system("pause");
}