#include<stdio.h>
#include<stdlib.h>
main()
{
int nota;
Marca1:  printf("\n Insira uma nota(0 a 20): "); //Em vez de usar o termo "marca",usa-se também "label".
scanf("%d" ,&nota);
if(nota<0 || nota>20)
goto Marca1;
system("pause");
}
