#
#
#include<math.h>
/*calcular e apresentar
y=sqrt(a+b)/(a-b) */
main()
{
float a;b;y;
printf("\n y=sqrt(a+b)/(a-b)\n");
printf("Insira os valores de a, b:\n")
scanf("%f %f", &a, &b);
y=sqrt(a+b)/(a-b);
printf("\n Y= %.2f\n", y);
system("pause");
}
