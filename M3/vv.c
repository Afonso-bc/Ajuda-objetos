#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i;
  
  for(i = 1; i < 10; i++)
  {
    if (i % 2 == 0) //se i for par n�o faz nada e pula para a pr�xima itera��o
    {
      continue;
    }
    else // sen�o imprime os �mpares
    {
      printf("Numero: %d \n",i );
    }
    
    printf("Numero impar!\n\n");
  
  }
  
  printf("Final do programa!\n\n");
  getch();
  return 0;
}
 
