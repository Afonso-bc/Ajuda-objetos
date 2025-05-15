#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

void aleatorio()
{
     int num,i;
     
     srand(time (NULL));
     printf("Numero aleatorio entre 1 e 50 \n");
     num = 1 + rand() % 50;
     printf("O numero criado aleatoriamente e' o %d \n", num);
}

main()
{
      char repetir;
      
     do{ 
      system("cls");
      aleatorio();  
	
	  printf("\n Digite S para sair do programa. ");
	  scanf(" %c" , &repetir);
      }while( toupper(repetir) != 'S');
	
      printf("\n\n O programa foi elaborado por: Pedro Gomes\n");
      system("pause");
}
