#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415

main()
{
      int escolha;
      float a,b;

      printf("MENU DAS AREAS");
      printf("_ _ _ _ _ _ _ _ _\n\n");
      printf("1-Quadrado\n");
      printf("2-Retangulo\n");
      printf("3-Triangulo\n");
      printf("4-Circulo\n");
      printf("_ _ _ _ _ _ _ _ _\n\n");
      printf("Indique a sua escolha: ");
      scanf("%d",&escolha);

      switch(escolha)
      {
	case 1:
	{
	printf("Insira um lado do seu quadrado");
	scanf("%f",&a);
	printf("A area do seu quadrado e %.2f",a*a);
	break;
       }

	case 2:
	{
	printf("Insira o comprimento e a largura do seu retangulo");
	scanf("%f %f",&a,&b);
	printf("A area do seu retangulo e %.2f",a*b);
	break;
        }

	case 3:
	{
	printf("Insira a base e a altura do seu triangulo");
	scanf("%f %f",&b,&a);
	printf("A area do seu triangulo e %.2f",b*a/2);
	break;
        }

	case 4:
	{
	printf("Insira o raio do seu circulo");
	scanf("%f",&a);
	printf("A area do seu circulo e %.2f",pi*pow(a,2));
	break;
        }

	default:
	{
	 printf("A sua escolha e invalida\nPor favor insira um numero de 1 a 4");
        }
      }

      system("pause");
}
                                       
                                       
                        
                         
                              
                          
      
      
      
      
      
      
