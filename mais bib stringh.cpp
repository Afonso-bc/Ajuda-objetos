#include <stdio.h>
#include <string.h> //necess�rio para strcpy
#include <conio.h>
int main (void)
{
  char nome[15];
  
  strcpy(nome, "Fulano de Tal");
  //strcpy(string_destino, string_origem);
  //note que a string de destino � nome
  //a string de origem � "Fulano de Tal"
  
  printf("Nome = %s", nome);
  
  getch();
  return 0;
}
