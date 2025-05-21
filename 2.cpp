#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int vet[20],i,soma,maior,menor;
	for (i = 1; i <= 5; i++)
	{
		printf("\nEscreva um numero: ");
		scanf ("%i", &vet[i]);
	}

	//fazer a soma
	soma = 0;
	for (i = 1; i <= 5; i++)
	{
		soma = soma + vet[i];
	}
    printf("\nA soma dos numeros e': %d",soma);

	//encontrar o maior
	maior = 0;
	for (i = 1; i <= 5; i++)
	{
		if (vet[i] > maior)
			maior = vet[i];
	}
	printf("\nO maior e': %d", maior);

	//encontrar o menor
	menor = 9999999;
	for (i = 1; i <= 5; i++)
	{
		if (vet[i] < menor)
			menor = vet[i];
	}
	printf("\nO menor e': %d", menor);

}