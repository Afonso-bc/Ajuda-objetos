#include<stdio.h>
#include<stdlib.h>
main()
{
    //somar os numeros inseridos at� o n� inserido seja igual a zero
    float  num, soma = 0;
    do{
    printf("Insira um numero");
    scanf("%f" , &num),
    soma = soma + num;  //acumulados
}while(num!=0);
printf("A soma dos numeros inseridos � %.1f\n",soma);
}

