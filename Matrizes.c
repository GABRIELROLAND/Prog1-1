/* Operaçoes com matriz*/

#include<stdio.h>
int main()
{
    int diagonal1A=1;
    int diagonal2A=1;
    int diagonal1B=1;
    int diagonal2B=1;
    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
    int i, j;

    //Ler Todos Elementos da Matriz A
    printf("\nLer a matriz A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEntre com o elemento %d-%d: ", i, j);
			scanf("%d", &matA[i][j]);
		}
	}
	//Ler Todos Elementos da Matriz B
	printf("\nLer a matriz B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEntre com o elemento %d-%d: ", i, j);
			scanf("%d", &matB[i][j]);
		}
	}
	//Exibir matriz lida A
	printf("\nA matriz lida A:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%d ", matA[i][j]);
		}
		printf("|\n"); // pula de linha
	}
	//Exibir matriz lida B
	printf("\nA matriz lida B:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%d ", matB[i][j]);
		}
		printf("|\n"); // pula de linha
	}
	//Exibir os valores da diagonal principal de A
	printf("\nA diagonal principal da matriz A:\n");
	for(i=0;i<3;i++)
	{
		printf("%d ", matA[i][i]);
		diagonal1A*=matA[i][i];
	}
	printf("\n\n");
	//Exibir os valores da diagonal principal de B
	printf("\nA diagonal principal da matriz B:\n");
	for(i=0;i<3;i++)
	{
		printf("%d ", matB[i][i]);
		diagonal1B*=matB[i][i];
	}
	printf("\n\n");
	//Exibir os valores da diagonal secundaria de A
	printf("\nA diagonal secundaria da matriz A:\n");
	j=2;
	for(i=0;i<3;i++)
	{
	printf("%d ", matA[i][j]);
	diagonal2A*=matA[i][j];
	j--;
	}
	printf("\n\n");
	//Exibir os valores da diagonal secundaria de B
	printf("\nA diagonal secundaria da matriz B:\n");
	j=2;
	for(i=0;i<3;i++)
	{
		printf("%d ", matB[i][j]);
		diagonal2B*=matB[i][j];
		j--;
	}
	printf("\n\n");
	//Imprimir a Determinante da Matriz A
	printf("\nA determinante da Matriz A = %d\n", diagonal1A-diagonal2A);
	//Imprimir a Determinante da Matriz B
	printf("\nA determinante da Matriz B = %d\n\n", diagonal1B-diagonal2B);
	//Calcular a soma da matriz A e B
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
	//Exibir matriz C = A + B
	printf("\nA soma das matrizes A + B = \n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%d ", matC[i][j]);
		}
		printf("|\n"); // pula de linha
	}
	printf("\n\n");
	return 0;
}
