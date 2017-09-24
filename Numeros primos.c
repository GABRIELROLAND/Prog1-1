/****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula: Guilherme Alexandre - 0050015038
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h>

int main()
{
int num, y, x;

printf("\nOla, meu nome eh Guilherme Alexandre e vou calcular numeros primos.\n ");

do
{
do
{
printf("\nEntre com um numero positivo: ");
scanf("%d",&num);
}
while(num<=0);

for(y = 2; y <= num; y++)
{
    if (num % y == 0)
    {
        break;
    }
}

if (num == y)
    printf("\n%d eh numero primo.\n",num);
else
    printf("\n%d nao eh numero primo.\n",num);

printf("\nDeseja continuar(1-Sim/2-Nao)? ");
scanf("%d",&x);
}
while (x==1);


if (x==2)
    printf("\nObrigado, ate a proxima! Para ver meu codigo entre no link.\n\n");

system("pause");
return 0;
}
