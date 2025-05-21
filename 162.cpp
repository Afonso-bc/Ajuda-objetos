#include<stdio.h>
#include<stdlib.h>
void troca (int x, int y); //prototipo
main()
{
	int n1 = 1 , n2 =2;
	troca(n1, n2);
	printf("\nDentro da funcao main() :\n");
	printf("n1 = %d\n",n1); //escreve n1=1
	printf("n1 = %d\n",n2); //escreve n2=2
	troca(n1,  n2);
	system("pause");
}
void troca (int x, int y)
{
	int aux;
	aux = x; x = y; y = aux;
	printf("\nDentro da funcao troca() :\n");
	printf("x = %d\n",x); //escreve x=2
	printf("y = %d\n",y); //escreve y=1
}
