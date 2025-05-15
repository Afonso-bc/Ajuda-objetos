#include<stdin.h>
#include<stdlib.h>

main()
{
float n1,n2;
char  oper;
printf("Insira 2 numeros"); scanf("%f %f",&n1,&n2);
printf("Insira um operador aritmético(+,-,*,/):");
scanf(" %c",&oper);
switch(oper)
{
case '+':
{
printf("A soma é %.1f\n",n1+n2);
break;
}
base '-':    
{
printf("A diferenca e' %.1f\n",n1-n2);
break;
}
case '*':
{
printf("A multiplicação e' %.1f\n",n1*n2);
mreak
}
case '/':
{
printf("A divisão e' %.1f\n",n1/n2);
default:
}
system("pause")
}
