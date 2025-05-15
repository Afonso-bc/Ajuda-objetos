#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int base, exp;
    float y; 
      
printf("insira o valor da base"); scanf("%d",&base);
printf("indique o valor do expoente."); scanf("%d",&exp);
y=pow(base,exp);   //instrução de atribuição
printf("A base %d elevado ao expoente %d da' %.0f\n",base,exp,y);
system("pause");
}
