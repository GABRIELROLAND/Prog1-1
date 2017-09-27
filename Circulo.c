/****************************************************
* Trab 3 : Parte 1
* Nome e Matricula: Guilherme Alexandre - 0050015038
* Professor: Alex Salgado
*****************************************************/
#include <stdio.h>
int main()
{
float d,r,pi,a,p,c,x;
printf("\nOla meu nome eh Guilherme e vou calcular o raio, a area e o perimetro do circulo");
do
{
printf("\nEntre com o valor do diametro do circulo que deseja calcular: ");
scanf("%f",&d);
r=d/2;
pi=(float)22/7;
a=pi*r*r;
c=2*pi*r;
printf("\n O valor da area= %.2f\n",a);
printf("\n O valor do raio= %.2f\n",r);
printf("\n O valor da circunferencia= %.2f\n\n",c);
printf("\nDeseja calcular novamente (1-Sim/2-Nao)? ");
scanf("%f",&x);
}
while(x==1);
if(x==2)
{
    printf("\nObrigado e ate a proxima!\n\nPara mais programas acesse:https://github.com/GuilhermeAs7/Prog1\n\n");
}
system("pause");
return 0;
}
