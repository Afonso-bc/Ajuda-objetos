#include <stdio.h>
#include <stdlib.h>
main ()
{
	int i, n;
	float *notas, soma =0;
	printf("Quantos elementos? ");
	scanf("%d",&n);
	//aloca memoria dinamica
	notas=(int *)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
	{
		printf("Nota para incide %d\n",i);
		fflush(stdin);
		scanf("%f",&notas[1]);
		soma = soma + notas [i];
	}
	if (n>0) printf("Media = %.2f",soma /n);
	//liberta a memoria alocada
	free(notas);
	printf("\n");
	//system("pause");
}
