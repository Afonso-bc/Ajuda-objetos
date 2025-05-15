#include<stdio.h>
#include<stdlib.h>


int SOMA(int n1, int n2)
{
return n1+n2;
}


void SOMAMED(int n3, int n4)
{
printf("A soma e' %d\n",SOMA(n3,n4));
printf("A media dos dois numeros e' %.1f\n",(float)SOMA(n3,n4)/2);
}


main()
{
int a,b;

printf("Insira dois numeros inteiros:");
scanf("%d %d",&a,&b);

SOMAMED(a,b);

system("pause");
}

