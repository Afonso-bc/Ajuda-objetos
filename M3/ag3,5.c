#include<stdio.h>
#include<stdlib.h>
main()
{
int N;

for(N=1; N<=14; N++)
{
if(N%2==0) //quando o numero e' par
continue; // salta para o proximo valor
printf("  %d" , N);
}
system("pause"); 
}
