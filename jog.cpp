#include<stdio.h>
#include<stdlib.h>
main()
{
      struct jog
{
      char nome[40];
      int idade,njogos,gmarcados;
      float peso,alt;
};
struct jog jogadores[5];
float med,soma=0;
int i,cont=0;


for (i=0;i<=4;i++)
{
    printf ("Insira os dados do %d jogador:\n",i+1);
    
    printf ("Insira o nome: ");
    scanf ("%s",jogadores[i].nome);
    
    fflush(stdin);
    
    printf ("Insira a idade: ");
    scanf ("%d",&jogadores[i].idade);   
    
    fflush(stdin);
    
    printf ("Insira a altura: ");
    scanf ("%f",&jogadores[i].alt);
    fflush(stdin);
    soma=soma+jogadores[i].alt;
    
    printf ("Insira o numero de jogos efetuados: ");
    scanf ("%d",&jogadores[i].njogos);
    fflush(stdin);
    
    printf ("Insira os golos marcados: ");
    scanf ("%d",&jogadores[i].gmarcados);
    
    if(jogadores[i].gmarcados>10)
    cont++;  
    
}
med=soma/5;
printf ("\nA media das alturas dos jogadores e' %.2f\n",med);
printf ("\n%d Jogadores marcaram mais de 10 golos\n",cont);
printf ("\nA media do primeiro e ultimo jogaores e' %.2f\n",(jogadores[0].alt+jogadores[4].alt)/2);

system("pause");
}
