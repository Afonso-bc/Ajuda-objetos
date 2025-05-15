#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void numAleatorio()
{
  int x;
      
  x=1+rand()%10;
  printf("Foi criado o numero aleatorio entre 1 e 10:\n%d\n",x);   
}

main()
{
      system("cls");
      numAleatorio();
      system("pause");
 }
