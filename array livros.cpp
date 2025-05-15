#include <stdio.h>
#include <stdlib.h>
main( )
{
 struct biblioteca
 {
   char autor[50],editora[60], genero,;
   int nPag;
   float preco;
 };
 
 int i;
 struct biblioteca livro[3];
 
  for(i=0; i<=2; i++)
  {
   printf("Insira os dados do %d. livro:\n", i+1);
   printf("Autor: "); 
   fgets(livro[i].autor,49,stdin);
   
   printf("Editora: "); 
   fgets(livro[i].editora,49,stdin);
 
   printf("Genero: "); 
   scanf(" %c", &livro[i].genero);
   
   printf("numero de paginas: "); 
   scanf(" %c", &livro[i].nPag);
   
   printf("preço: "); 
   scanf(" %c", &livro[i].preço);
      system("pause");
}
