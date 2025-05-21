#include<stdio.h>
#include<stdlib.h>
int main()
{
	char nome[20];
	int i, a, b, j;
	printf("como te chamas?");
	gets_s(nome);
	printf("\n\nOla aqui estou eu  - %s\n\n",nome);
	for (i = 0; nome[i] != '\0'; i++);
    printf("O meu nome tem %d caracteres",i);

	printf("\n=================\n");
	a = 0; b = 0;
	for (i = 0; nome[i] != '\0'; i++)
	{
		if(nome [i]=='a')
			a++;
		if (nome[i] == 'i')
			b++;
	}
	printf("O seu nome tem %d -a-",a);

	printf("\n=================\n");
	
	/*for (i = 0; nome[i] != '\0'; i++)
	{
		if (nome[i] == 'i')
			b++;
	}*/
	printf("O seu nome tem %d -i-", b);

	printf("\n=================\n");
	printf("O meu nome ao contrario \n");
	for (j = i; j >= 0; j--)
		printf("%c",nome[j]);
	printf("\n\n");
}