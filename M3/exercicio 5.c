#include<stdio.h>
#include<stdlib.h>
main()
{
  int nota;           
  printf("Insira uma nota inteira: ");      
  scanf("%d",&nota);
  if(nota>=0&&nota<=20)
  printf("valor valido para uma nota:\n");
  else 
  printf("valor nao valido para uma nota\n");
  system("pause");
}
