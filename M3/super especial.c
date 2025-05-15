#include <stdio.h>
#include <stdlib.h>
main() {
int mes;
 printf(“Qual é o mês?”);
 scanf(“%d”,&mes);
 switch(mes)

{
 case 1: {
 printf(“Janeiro”);
 break;

}
 case 2: {
 printf(“Fevereiro”);
 break;

}
 case 3: {
 printf(“Março”);
 break;

}
 default :{
 printf(“Valor não válido”);
 break;

}

}
 system(“pause”); }
