#include<stdio.h>                                                               
#include<stdlib.h>
#include<time.h>
main()
{
      int Tabela[10], i, maior=0, imax,contPares=0;
      
      srand(time(NULL));
      
      for(i=0; i<=9; i++)
      {
        Tabela[i]=1+rand()%50;
        printf("   %d",Tabela[i]);
        
        if(Tabela[i]>maior)
        {
          maior=Tabela[i];
          imax = i;
          } 
        if(Tabela[i]%2==0)
        contPares++;     
      }//Fim de For 
      
      printf("\n\n O %d. numero e' o maior da tabela\n" , imax+1);
      printf("\n O numero maior da tabela e' %d\n" , maior);
      
      system("pause"); 
}
               
      
