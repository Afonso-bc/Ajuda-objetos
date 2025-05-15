#include
<stdio.h
>
#include
<stdlib.h
>
main() {
int num1,num2,num3;
float media;
printf("Introduza o número 1.
\n");
scanf("%d",&num1);
printf("Introduza o número 2.
\n");
scanf("%d",&num2);
printf("Introduza o número 3.
\n");
scanf("%d",&num3);
media=(float)(num1+num2+num3)/3;
printf("A média é %f\n",media);
system("pause");
}
