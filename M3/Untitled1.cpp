#include<stdio.h>
#include<stdlib.h>
main()
{
int N, c

for(c=1 ; c<=6 ; c++ )
{
        printf("Insere um numero inteiro;");
        scanf("%d",&N);
        if(N>MAX)
        MAX=N;
        }
        printf("\n O numero maior e' %d \n", MAX);
getch();
}
