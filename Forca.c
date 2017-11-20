/*
Trabalho realizado pelo grupo de 6 integrantes.

Nomes: Gabriel Roland, Guilherme Alexandre, Leonardo Martelotte.
Prof: Alex Salgado
*/
#include<stdio.h>
#include<locale.h> // indica os caracteres utilizados
#include<time.h>
#include<stdlib.h> // Biblioteca para uso do system("cls")
#include<string.h>

int main (){
    printf("Bem vindo ao jogo da forca realizado por: \nGuilherme Alexandre, Gabriel Roland e Leonardo Martelotte.\n\n");
    printf("Uma palavra de 5 letras aleatoria sera escolhida e voce precisa acertar!\n\n\n");
    start:
	setlocale(LC_ALL,"PORTUGUESE"); // indica a língua utilizada
	int acertos=0,erros=0,num_palavra=0,i, j,exec=1,tam;
	int jogando;
	char *palavra;   // char * e char [] são tipos diferentes, mas não é imediatamente aparente em todos os casos. Isso ocorre porque os arrays se decompõem em ponteiros, o que significa que se uma expressão do tipo char [] for fornecida onde um do tipo char * for esperado, o compilador converte automaticamente a matriz em um ponteiro para seu primeiro elemento.
    char lacuna[20]="_";
	char letra,letraserradas[25];
	system("PAUSE");
	system("cls");
	srand(time(NULL));
	num_palavra=(rand() % 11);   //possibilidade de cair a palavra.

 	// switch É uma forma de reduzir a complexidade de vários if … else encadeados
	switch (num_palavra){
	case 1:
		palavra = "arroz";
		break;
	case 2:
		palavra = "poder";
		break;
	case 3:
		palavra = "louca";
		break;
	case 4:
		palavra = "temer";
		break;
	case 5:
		palavra = "golpe";
		break;
	default:
		palavra = "sonho";
		break;
}
	tam = strlen(palavra);
    for(i=1; i<tam; i++)
    lacuna[i]='_';
    while (exec != 0){
    system("cls"); // Para limpar a tela
	printf(" +-------+\n |       |\n |       |\n |\n |\n |\n_|_");
	if(erros==2){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |\n |\n_|_");
	}else if(erros==4){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |       |\n |\n_|_");
	}else if(erros==6){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\n |\n_|_");
	}else if(erros==8){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |\n_|_");
	}else if(erros==10){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      /\n_|_");
	}else if(erros==12){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_");
	}else if(erros >=12){
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_");
	goto lose;
	}

        printf("\t\t%s\n",lacuna);
        printf("\nDigite uma letra: ");
        scanf("%c",&letra);
		j=0;
        for(i=0; i<tam; i++){
            if (letra == palavra[i]){
				j++;
				lacuna[i] = letra;
            }
        }
    j == 0 ? erros++ : erros--;
    if(strcmp(palavra,lacuna) == 0){
	exec = 0;

	printf("A palavra era: %s\n\n\n",palavra);
        printf("       ___________      \n");
                printf("      '._==_==_=_.'     \n");
                printf("      .-\\:      /-.    \n");
                printf("     | (|:.     |) |    \n");
                printf("      '-|:.     |-'     \n");
                printf("        \\::.    /      \n");
                printf("         '::. .'        \n");
                printf("           ) (          \n");
                printf("         _.' '._        \n");
                printf("        '-------'       \n\n");
    fflush(stdin);//limpa o buffer do teclado pra evitar quaisquer erros
    goto start;
	return 0;
	}
}	lose:
	exec = 0;
	system("cls");
	printf(" +-------+\n |       |\n |       |\n |       o\n |      /|\\\n |      / \\\n_|_\t\t%s",lacuna);
	printf("\n\nNão foi dessa vez. Você perdeu o jogo, jogue novamente!");
	printf("\n\nA palavra era: %s.\n\n\n",palavra);
    fflush(stdin); //limpa o buffer do teclado pra evitar quaisquer erros
    goto start;
    return 0;
}
