#include<stdio.h>
#include<stdlib.h>

int Potencia(int base, int expo)
{ int pot=1, cont;
if(expo==0)
return 1;
else
{
    pot =Potencia (base,expo-1)*base;
    return pot;
}
}
main()
{
      int B, exp;
      printf("Insira o valor da base:"); scanf("%d",&B);
      printf("Insira "  " do expoente:"); scanf("%d", &exp);
      printf("\n A potencia calculada e' %d\n", Potencia(B,exp));
      system("pause");
      }
