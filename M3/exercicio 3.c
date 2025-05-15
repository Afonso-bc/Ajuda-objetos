#include<stdio.h>
#include<stdlib.h>
main()
{
float t1,t2,t3,media;
printf("Insira as notas dos 3 testes:\n");
scanf("%f %f %f",&t1,&t2,&t3);
media=(t1+t2+t3)/3;
printf("A media calculadora:%f\n",media);
if(media>=9,5)
printf("O aluno esta aprovado\n"); 
else
printf("o aluno esta reprovado|n");
system("pause");
}
