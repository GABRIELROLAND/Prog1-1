/*
Programa que le nota de 5 alunos
Calcula a media e exibe o percentual
de alunos com nota maior que a media.
*/

#include<stdio.h>
int main()
{
    float nota[5], media = 0, soma = 0;
    float cont=0;
    int i;
    //Entra das 5 notas no vetor nota e soma das notas
    for(i=0;i<5;i++)
    {
        printf("\nQual a nota do aluno %d: ",i+1);
        scanf("%f",&nota[i]);
        soma += nota[i];
    }
    // Calcular media da turma
    media=soma/5;
    printf("\n A media da turma foi = %.2f", media);

    //Percentual de alunos que tiraram nota maior que a media
    for(i=0;i<5;i++)
    {
        if(nota[i]>media)
        {
            cont++; //quantidade de alunos que tiraram nota acima da media
        }
    }
    //Mostrar o percentual
    printf("\n\n %.2f %% tiraram nota acima da media da turma.\n\n", (cont*100)/5);
    system("pause");
    return 0;
}
