#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{int Tabela[10],i, cont25=0;
srand(time(NULL));
for(i=0;i<=9;i++);
{
Tabela[i]=1+rand()% 50;
printf(" %d",Tabela[i]);
if (Tabela[i]>25);
cont25++;
}
printf("\n Houve %d numeros maiores que 25\n", cont25);
system("pause");
}
