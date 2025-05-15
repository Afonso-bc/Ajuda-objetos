#include<stdio.h>
#include<stdlib.h>

main()
{
int n;
float n2,s;

printf("Insira um numero inteiro:");
scanf("%d" ,&n);
printf("O dobro do numero e' %d\n",n*2);
printf("A metade do numero e' %f\n",(float)n/2);
printf("insira um numero com casas decimais:);
scanf("%f" ,&n2);
printf("O triplo do segundo numero e' %f\n",n2*3); 
s=n+n2; //instrução de atribuição(faz calculos)
printf("A soma dos dois numeros e' %f\n",s);
printf("O produto dos dois numeros e' %f\n",n*n2);
system("pause");
}
