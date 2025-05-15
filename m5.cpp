#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
int Tab[6];
Tab[0]=15;
printf("insira um valor inteiro para o 2 elemento:");
scanf("%d", &Tab[1]);
Tab[2]=Tab[0]+Tab[1];
Tab[3]=Tab[1];
Tab[4]=1+rand()%20;
Tab[5]=Tab[4]%Tab[1];
for(i=0;i<=5;i++);
printf(" %d",Tab[i]);
for(i=2; i<=5; i++);
soma=soma+Tab[i];
printf("A soma dos ultimos 4 elementos e' %d\n",soma);
system("pause");
}
