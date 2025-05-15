#include<stdio.h>
#include<stdlib.h>

void Identificacao()
{
     printf("Dados de Identificaçao \n");
     printf("Nome: Daniel Sousa \n");
     printf("Ano Escolar: 10 ano \n");
     printf("Escola: Francisco Franco \n");
     printf("Idade: 16 anos \n");
}

void AreaRetang()
{
     float alt,lado;
     printf("Insira um numero para a altura e para o lado:\n");
     scanf("%f %f",&alt,&lado);
     printf("A area do retangulo e %f", alt*lado);
}

void digitdec()
{
     int N;
     
     printf("Os 10 digitos do sistema decimal sao:\n");
     for(N=0;N<=9;N++)
     printf("  %d",N);
}

void mult4()
{
     int N;
     printf("Os 20 multiplos de 4 sao:");
     
     for(N=1;N<=20;N++)
        printf("  %d",N); 
}

void saida()
{
     printf("Obrigado por usar este programa. Espero voltar a ve-lo.");
}
main()
{
      int escolha; 
      
      system("cls");
      printf("\n MENU \n");
      printf("\n 1 - Identificaçao do programador \n");
      printf("\n 2 - Area do retangulo \n");
      printf("\n 3 - Digitos decimais \n");
      printf("\n 4 - Primeiros 20 numeros de 4 \n");
      printf("\n 0 - Saida do programa \n");
      scanf("%d",&escolha);
      
      switch(escolha)
      {
                     case 1: {
                          identificacao();
                          break;
                          }
                     
                     case 2: {
                          AreaRetang();
                          break;
                          }
                          
                     case 3:{
                          digitdec();
                          break;
                          }
                          
                     case 4:{
                          mult4();
                          break;
                          }
                          
                     case 0:{
                          saida();
                          break;
                          }
                          
                     default:{
                              printf("Valor invalido. Experimente um valor entre 0 e 4.");
                              break;
                              }
       }        
getch();
}
