#include <stdio.h>
#include <stdlib.h>
main( )
{
struct RegProdutos
{
int quantidade;
float preco;
float iva;
};
struct RegProdutos produto1;
float total;
 printf(�Introduza a quantidade\n�);
 scanf(�%d�,&produtos.quantidade);
 printf(�Introduza o pre�o\n�);
 scanf(�%f�,&produtos.preco);
 printf(�Introduza o iva\n�);
 scanf(�%f�,&produtos.iva);
 total = produtos.quantidade * produtos.preco * (1 + iva);
 printf(�O total a pagar � %f /n�,total);
 system(�pause�);
}
