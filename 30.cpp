#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int lado, cont=1, i=1;
	printf("Lado do quadrado: ");
	scanf("%d", &lado);
	while (cont <= lado * lado)
	{
		if (cont % lado == 0)
		{
			printf("%d\n",cont);
			i++;
		}
		else
		{
			printf("%d", cont);
			
		}
		cont++;
	}
	system("pause");
}