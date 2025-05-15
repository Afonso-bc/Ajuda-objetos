#include<stdin.h>
#include<stdlib.h>

main()
{
int mes,ano;

printf("Insira o numero de um mes");
scanf("%d" , &mes);
switch (mes)
{
case 1: case 3: case 5:
case 7: case 8: case 10: case 12:
{
printf("O mes tem 31 dias,\n");
break;
}
case 2: case 4: case 9: case 11:
{
printf("O mes tem 30 dias \n");
break;
}
case 2:
{
printf("De que ano?");
scanf("%d" ,&ano);
if(ano%4==/)
printf("E um ano bissenxto. O fevereiro tem 29 dias.\n");
else
printf("O mes tem 28 dias.\n");
break;
}
system("pause")
}
