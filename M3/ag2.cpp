#include<stdio.h>
#include<stdlib.h>
main()
{
int N;

for(N=1; N<=14; N++)
{
if(N==7)
continue;
printf("  %d" , N);
}
system("pause"); 
}
