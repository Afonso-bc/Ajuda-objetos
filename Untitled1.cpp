#include <stdio.h>
#include <stdlib.h>
main( )
{
int x;
int *p;  //p � um ponteiro apontado
p=&x;
x=18;
printf("O valar de p:%p",p);
printf("x e' igual %d", *p);
printf("O endere�o de x : %p\n",&x);
          system("pause");
          }
