/****************************************************
* Trab 3 : Parte 2
* Nome e Matricula: Guilherme Alexandre - 0050015038
* Professor: Alex Salgado
*****************************************************/
#include<stdio.h>
int main()
{
    float a,h,B,b,x;
    do{
    printf("\nEntre com o valor da altura do trapezio: ");
    scanf("%f",&h);
    do{
    printf("\nEntre com o valo da base menor do trapezio: ");
    scanf("%f",&b);
    printf("\nEntre com o valor da base maior do trapezio: ");
    scanf("%f",&B);
    if(b>B)
    {
        printf("\n\nEntre com os valores corretos da Base maior e menor. Tente novamente:\n\n");
    }
    }
    while(b>B);
    a=(h*(B+b))/2;
    printf("\nA area do trapezio = %.2f\n",a);
    printf("\nDeseja calcular novamente(1-Sim/2-Nao)? ");
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
