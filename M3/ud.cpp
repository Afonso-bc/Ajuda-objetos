#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
      float N; int escolha;
      
      printf("\n Insira um numero:");
      scanf("%f",&N);
      
      printf("\n MENU\n");
      printf("\n 1 - o dobro do numero");
      printf("\n 2 - o cubo do numero");
      printf("\n 3 - a metade do numero");
      printf("\n 4 - a raiz quadrada do numero");
      printf("\n 0 - SAIR DO PROGRAMA");
      }while(esolha!=0);
      printf("Qual e' a sua escolha?");
      scanf("%d" , &escolha);
      
      switch(escolha)
      {
                     case 1:
                          printf("\n O dobro do numero e' %.2f \n", N*2);
                          break;
                          case 2:
                               printf("\n O cubo do numero e' %.2f\n", pow(N,3));
                               break;
                               case 3:
                                    printf("\n A metade do numero e' %.2f\n", N/2);
                                    break;
                                    case 4:
                                         printf("\n A raiz quadrada do numero e' %.2f\n", sqrt(N));
                                         break;
                                         system("pause");
                                         }                                         }

