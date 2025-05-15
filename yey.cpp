# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# define  pi  3.141592
main()
{
float A,V,R;

char nome[30];
printf("Digite o seu nome:");
gets(nome);
printf ("calcular a area e o volume de uma esfera\n");
printf ("insira o valor do raio: :");
scanf("%f",&R);
A=4*pi*pow(R,2);
printf("A area é %f\n",A);
V=(float)4/3*pi*pow(R,3);
printf("O volume é %f\n",V);
printf("o programa foi elaborado por:%s\n",nome);
system ("pause");
}
