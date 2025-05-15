#include <stdio.h>
#include <stdlib.h>
main( )
{
 struct cao[10]
{
char apelido[10],raça[10], sexo, idade, peso, preço;
};
struct cao[10];
for(i=0; i<=2; i++)
  {
   
   fflush(stdin);
   printf("Insira os dados do %d. cao:\n", i+1);
   printf("apelido: "); 
   fgets(cao[i].apelido,49,stdin);
   fflush(stdin);
   
   printf("raça: "); 
   fgets(cao[i].raça,49,stdin);
   fflush(stdin);
   
   printf("sexo: "); 
   scanf(" %c", &cao[i].sexo);
   
   printf("idade: ");
   
   
   }   //fim de for
      
      system(“pause”);
}
