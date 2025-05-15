#include <stdio.h>
#include <stdlib.h>
main( )
{
      struct turma
{
char nome[i],idade[i], altura;
};
struct turma [i];
for(i=0; i<=2; i++)
  {
   
   fflush(stdin);
   printf("Insira os dados do %d. amigo:\n", i+1);
   printf("Nome: "); 
   fgets(amigo[i].nome,49,stdin);
   fflush(stdin);
   
   printf("Idade: "); 
   fgets(amigo[i].idade,49,stdin);
   fflush(stdin);
   
   printf("Altura: "); 
   scanf(" %c", &amigo[i].altura);
   
   }   //fim de for
   
   printf("\n\n A média das alturas dos 2 amigos e': %,1f\n", med);
   printf("\n\n O amigo mais velho e': %.2f\n\n");
      system(“pause”);
}
