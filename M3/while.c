#include<stdio.h>
#include<stdlib.h>
main()
{
int N=1;

while(N<=10)
{
  printf("    %d" ,N);
  N=N+1;
}

printf("\n\n");

N=10;
while(N>=1)
{
  printf("    %d" ,N);
  N=N-1;
}


getch();
}
