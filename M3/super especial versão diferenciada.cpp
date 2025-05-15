#include <stdio.h>
#include <stdlib.h>
main() 
{
int mes;


 printf("Qual e' o mes?");
 scanf("%d",&mes);
 switch(mes)
{
 case 1: {
 printf("Janeiro\n");
 break;
}

 case 2: {
 printf("Fevereiro\n");
 break;
}

 case 3: {
 printf("Marco\n");
 break;
}

 default :{
  printf("Valor nao valido\n");
  break;
}

}
 system("pause"); 
 }

