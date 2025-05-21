//Passagem por referencia (ponteiros)
#include<stdio.h>
#include<stdlib.h>
float med (float *n, int t); //prototipo

main()
{
	float notas[4] = {10,11,12,13};
	printf("Media = %.2f\n", med(notas, 4));
	//system("pause");
}

float med(float *n, int t)
{
	int i;
	float soma =0;
	for(i=0; i<t;i++)
	soma = soma + *n++;
	return(soma/t);
}
