/***********
*
* Nome: Guilherme Alexandre
* Calculo Fatorial
*
***********/
#include <stdio.h>

int main ()

{
    int num;
    int i;
    int fat;

    do
    {
        printf("\nEntre com um numero:");
        scanf("%d",&num);
    }
    while(num<=0);

    // calcular fatorial;

    fat=1;

    for(i=num; i>=1; i--)
    {
        fat = fat * i;
    }

    printf("\nO fatorial = %d\n\n", fat);

    system("pause");
    return 0;
}
