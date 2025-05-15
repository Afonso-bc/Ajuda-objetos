#include<stdio.h>
#include<stdlib.h>
int soma(int k, int l)
{
return k+l;    
}
void Media2num(int n1,int n2)
{
printf("A soma e %d \n", soma(n1,n2));
printf("A soma e %.2f \n",(float) soma(n1,n2)/2);     
     }
     main()
     {
     int a,b;
     printf("insira 2 numeros inteiros:\n"); scanf("%d %d",&a,&b);
     Media2num(a,b);  
     system("pause");    
           }

