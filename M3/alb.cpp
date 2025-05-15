#include<stdio.h>
#include<stdlib.h>
main()
{
    //somar os numeros inseridos até o nº inserido seja igual a zero
    float  num, soma = 0;
    do{
    printf("Insira um numero");
    scanf("%f" , &num),
    soma = soma + num;  //acumulados
}while(num!=0);
printf("A soma dos numeros inseridos é %.1f\n",soma);
}

