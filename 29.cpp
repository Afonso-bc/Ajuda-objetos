#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int total,
		count = 1;
	float nota,
		soma = 0.0;
	printf("Numero de alunos na sala: ");
	scanf("%d", &total);
	while (count <= total)
	{
		printf("Nota do aluno %d: ", count);
		scanf("%f", &nota);
		soma = soma + nota;
		count++;
	}
	printf("Media da turma: %.2f\n", soma / total);
	system("pause");
}