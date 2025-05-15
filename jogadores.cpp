#include <stdio.h>
#include <stdlib.h>
main( )
{
 struct jog
 {
      char nome[40];
      int idade,njogos,ngolos;
      float peso,altura;
 };
  struct jog Jogador[5];
  
  int i;
  float soma=0;
  
   for(i=0; i<=4; i++)
   {
     printf("Insira o nome do jogador: ");
     scanf("%s",  Jogador[i].nome);
     
     printf("Insira a idade do jogador: ");
     scanf("%d",  &Jogador[i].idade);
     
     printf("Insira o numero de jogos do jogador: ");
     scanf("%d",  &Jogador[i].njogos); 
      
     printf("Insira o numero de golos do jogador: ");
     scanf("%d",  &Jogador[i].ngolos);
     
      printf("Insira o peso do jogador: ");
     scanf("%f",  &Jogador[i].peso);
      
     printf("Insira a altura do jogador: ");
     scanf("%f",  &Jogador[i].altura);
     soma = soma + Jogador[i].altura;
     }
     
     scanf("
      
      system("pause");
      }
