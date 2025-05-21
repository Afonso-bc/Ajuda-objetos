//Passagem por referencia utilizando
//parametros de referencia
#include<stdio.h>
#include<stdlib.h>
void troca (int *x, int *y); //prototipo
main()
{
	int ni=1,n2=2;
	troca(&n1, &n2);
	printf("nDentro da função main() :\n");
	printf("n1=%d\n",n1); //escreve n1=2
	printf("n2=%d\n",n2); //escreve n2=1
	//system("pause");
}
void troca (int *x, int *y)
{
	int aux;
	aux=*x; =*y; *y=aux;
	printf("\nDentro da função troca() :\n");
	printf("x=&d\n",*x); //escreve x=2
	printf("y=%d\n",*y); //escreve y=1
}
