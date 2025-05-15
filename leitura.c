#include<stdio.h>
#include<stdlib.h>

main()
{
   int N, dobro;
   float N2, metade; 
      
      printf("insira um numero inteiro: ");
      scanf("%d" , &N);
      
      dobro = N*2 ;
      printf("O dobro do numero e': %d\n" , dobro);
      
      
      printf("insira um numero com casas decimais: ");
      scanf("%f" , &N2);
      
      metade = N2/2;
      printf("A metade do numero e': %.1f\n\n" , metade);
      
      system("pause");
      }
      
