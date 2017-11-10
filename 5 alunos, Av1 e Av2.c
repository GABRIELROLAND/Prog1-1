/*
Ler Av1 e Av2 de 5 alunos e informar
a media e se passou ou precisa de Av3
*/
#include<stdio.h>
int main()
{
float nota [5][2];
float media = 0;
int i;
//Entrada de notas de 5 alunos
for(i=0;i<5;i++)
{
printf("\n--------------------------------");
printf("\nEntre com a Av1 do aluno %d: ", i+1);
scanf("%f",&nota[i][0]);
printf("\nEntre com a Av2 do aluno %d: ", i+1);
scanf("%f",&nota[i][1]);
media = (nota[i][0] + nota[i][1]) / 2;
}
//Imprimir relatorio
//Numero do aluno, media e resultado
printf("\n--------------------------------");
printf("\nRelatorio de Av1 e Av2");
printf("\nAluno\tMedia\tResultado");
for(i=0;i<5;i++)
{
    media = (nota[i][0] + nota[i][0])/2;
    printf("\n %d \t %.2f \t", i+1, media);
    if(media>=6)
    {
        printf("Passou");
    }
    else
    {
        printf("Av3");
    }
}
return 0;
}
