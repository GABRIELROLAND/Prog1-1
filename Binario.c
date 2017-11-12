#include<stdio.h>
int main()
{
int numero, resto;
int bin[10];
int i=0;
int j=0;

printf("\nEntre com um numero inteiro [1-50]: ");
scanf("%d",&numero);
printf("\n\n%d em binario = ", numero);

/*  CONVERTER PARA BINARIO  */

while(numero!=1)
{
resto = numero % 2;
numero = numero / 2;
bin[i] = resto;
i++;
}

/*  GUARDAR O ULTIMO VALOR DA VARIAVEL NUMERO QUE SEMPRE SERA 1 */
bin[i] = numero;

/*  PARA IMPRIMIR NA ORDEM REVERSA  */
for(j=i;j>=0;j--)
{
printf("%d", bin[j]);
}
printf("\n\n\n");
system("pause");
return 0;
}
