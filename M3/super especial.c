#include <stdio.h>
#include <stdlib.h>
main() {
int mes;
 printf(�Qual � o m�s?�);
 scanf(�%d�,&mes);
 switch(mes)

{
 case 1: {
 printf(�Janeiro�);
 break;

}
 case 2: {
 printf(�Fevereiro�);
 break;

}
 case 3: {
 printf(�Mar�o�);
 break;

}
 default :{
 printf(�Valor n�o v�lido�);
 break;

}

}
 system(�pause�); }
